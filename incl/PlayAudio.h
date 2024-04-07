void PlayAudio(const char *filename) {
    PlaySound(filename, NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}