for (int i = 0; i < 2; i++) {
  dst.dword[i] = ((u64)a.dword[i] < (u64)b.dword[i]) ? 0xFFFFFFFFFFFFFFFF : 0;
}
