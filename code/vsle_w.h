for (int i = 0; i < 4; i++) {
  dst.word[i] = ((s32)a.word[i] <= (s32)b.word[i]) ? 0xFFFFFFFF : 0;
}
