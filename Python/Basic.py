import pygame
pygame.init()

#creating window
gamewindow = pygame.display.set_mode((600,400))
pygame.display.set_caption("Flappy bird")

# creating specific variables

exit_game = False
game_over = False

# creating game loop

while not exit_game:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            exit_game = True
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_RIGHT:
                print("your pressed right arrow key")
            if event.key == pygame.K_LEFT:
                print("your pressed Left arrow key")
            if event.key == pygame.K_UP:
                print("your pressed up arrow key")
            if event.key == pygame.K_DOWN:
                print("you pressed down arrow key")
pygame.quit()
quit()