from typing import Union
import random
import string


class Card:
    def __init__(self, card_num):
        self.brand: str = Card.get_brand(card_num)
        self.card_num: str = card_num
        self.valid: bool = Card.is_valid(card_num)

    @staticmethod
    def get_brand(card_num: str) -> Union[str, None]:
        """
        get brand from card_num.

        :param card_num: card number
        :return None if it can't find brand. O.W., brand
        """
        if len(card_num) == 15:
            if card_num[:2] in ['34', '37']:
                return "amex"

        elif len(card_num) == 16:
            if card_num[0] == '4':
                return "visa"
            elif 51 <= int(card_num[:2]) <= 55:
                return "mastercard"

    @staticmethod
    def is_valid(card_num) -> bool:
        def even_sum_helper(x: int) -> int:
            x *= 2
            if x > 9:
                x = x // 10 + x % 10
            return x

        try:
            card_num = list(map(int, reversed(card_num)))
        except ValueError:
            return False

        even_sum = sum(map(even_sum_helper, card_num[1::2]))
        odd_sum = sum(card_num[0::2])

        check_sum = even_sum + odd_sum
        return check_sum % 10 == 0

    @staticmethod
    def generate(brand: str):
        brand = brand.lower()
        if brand not in ["visa", "amex", "mastercard"]:
            raise ValueError("only support brand 'visa', 'amex', 'mastercard'")

        prefix = {
            "visa": "4",
            "amex": "340",
            "mastercard": "51"
        }

        card_num_len = {
            "visa": 16,
            "amex": 15,
            "mastercard": 16
        }
        return Card._generate_with_prefix_and_len(prefix[brand], card_num_len[brand])

    @staticmethod
    def _generate_with_prefix_and_len(prefix: str, length: int) -> str:
        letters = string.digits
        s1 = ''.join(random.choice(letters)
                     for i in range(length-len(prefix)-1))
        num = prefix + s1 + '0'

        def even_sum_helper(x: int) -> int:
            x *= 2
            if x > 9:
                x = x // 10 + x % 10
            return x

        num_tmp = list(map(int, reversed(num)))

        even_sum = sum(map(even_sum_helper, num_tmp[1::2]))
        odd_sum = sum(num_tmp[0::2])

        check_sum = even_sum + odd_sum
        last_digit = str(10-check_sum % 10)
        num = num[0:-1] +last_digit
        return num

    def __str__(self):
        return f"a {'valid' if self.valid else 'invalid'} {self.brand} Card #{self.card_num}"
    

print(Card.generate("amex"))
print(Card.is_valid("340999844837916"))

