# inport:use to import other module
import pygame
# sprite
# to mean the image and objection from pygame
FPS = 60
WIDTH = 500
HEIGHT = 600
GREEN = (0, 255, 0)
WHITE = (255, 255, 255)
# initialize game and build a windows
pygame.init()
# set the wide and length of windows
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("COOL GAME")  # game title
clock = pygame.time.Clock()


class Player(pygame.sprite.Sprite):
    def __init__(self):
        pygame.sprite.Sprite.__init__(self)
        self.image = pygame.Surface((50, 40))  # image setting
        self.image.fill(GREEN)
        self.rect = self.image.get_rect()  # locate image
        self.rect.x = 200
        self.rect.y = 200

all_sprites = pygame.sprite.Group() # build a sprite group
player = Player()
all_sprites.add(player)

# game loop
running = True
while running:
    clock.tick(FPS)  # only execute FPS times
    # get input
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # update the game

    # display scene
    # screen.fill(WHITE)
     all_sprites.draw(screen) 
     pygame.display.update()

pygame.quit()
