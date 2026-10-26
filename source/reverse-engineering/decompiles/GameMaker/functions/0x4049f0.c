// rea decompile_all
// name: FUN_004049f0
// address: 0x4049f0
// body: available
// range: 0x4049f0-0x404b9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


DWORD FUN_004049f0(undefined4 *param_1)

{
  DWORD DVar1;
  HANDLE pvVar2;
  LONG lDistanceToMove;
  BOOL BVar3;
  uint uVar4;
  DWORD dwCreationDisposition;
  uint uVar5;

  param_1[3] = 0;
  param_1[4] = 0;
  uVar5 = (uint)*(ushort *)(param_1 + 1);
  if (uVar5 == 0xd7b1) {
    DVar1 = 0x80000000;
    dwCreationDisposition = 3;
    param_1[7] = &LAB_00404944;
  }
  else {
    if (uVar5 == 0xd7b2) {
      DVar1 = 0x40000000;
      dwCreationDisposition = 2;
    }
    else {
      if (uVar5 - 0xd7b3 != 0) {
        return uVar5 - 0xd7b3;
      }
      DVar1 = 0xc0000000;
      dwCreationDisposition = 3;
    }
    param_1[7] = &LAB_00404984;
  }
  param_1[9] = FUN_004049d0;
  param_1[8] = &LAB_00404980;
  if (*(short *)(param_1 + 0x12) == 0) {
    param_1[2] = 0x80;
    param_1[9] = &LAB_00404980;
    param_1[5] = param_1 + 0x94;
    if (*(short *)(param_1 + 1) == -0x284e) {
      if (param_1 == (undefined4 *)&DAT_007835fc) {
        DVar1 = 0xfffffff4;
      }
      else {
        DVar1 = 0xfffffff5;
      }
    }
    else {
      DVar1 = 0xfffffff6;
    }
    pvVar2 = GetStdHandle(DVar1);
    if (pvVar2 != (HANDLE)0xffffffff) {
      *param_1 = pvVar2;
LAB_00404b58:
      if (*(short *)(param_1 + 1) != -0x284f) {
        DVar1 = GetFileType((HANDLE)*param_1);
        if (DVar1 == 0) {
          CloseHandle((HANDLE)*param_1);
          *(undefined2 *)(param_1 + 1) = 0xd7b0;
          return 0x69;
        }
        if (DVar1 == 2) {
          param_1[8] = &LAB_00404984;
        }
      }
      return 0;
    }
  }
  else {
    pvVar2 = CreateFileW((LPCWSTR)(param_1 + 0x12),DVar1,1,(LPSECURITY_ATTRIBUTES)0x0,
                         dwCreationDisposition,0x80,(HANDLE)0x0);
    if (pvVar2 != (HANDLE)0xffffffff) {
      *param_1 = pvVar2;
      if (*(short *)(param_1 + 1) != -0x284d) goto LAB_00404b58;
      *(short *)(param_1 + 1) = *(short *)(param_1 + 1) + -1;
      DVar1 = GetFileSize((HANDLE)*param_1,(LPDWORD)0x0);
      if (DVar1 != 0xffffffff) {
        lDistanceToMove = DVar1 - 0x80;
        if (DVar1 + 1 < 0x81) {
          lDistanceToMove = 0;
        }
        DVar1 = SetFilePointer((HANDLE)*param_1,lDistanceToMove,(PLONG)0x0,0);
        if (DVar1 != 0xffffffff) {
          uVar5 = 0;
          BVar3 = ReadFile((HANDLE)*param_1,param_1 + 0x94,0x80,(LPDWORD)&stack0xfffffff8,
                           (LPOVERLAPPED)0x0);
          if (BVar3 == 1) {
            for (uVar4 = 0; uVar4 < uVar5; uVar4 = uVar4 + 1) {
              if (*(char *)((int)param_1 + uVar4 + 0x250) == '\x0e') {
                DVar1 = SetFilePointer((HANDLE)*param_1,uVar4 - uVar5,(PLONG)0x0,2);
                if ((DVar1 == 0xffffffff) || (BVar3 = SetEndOfFile((HANDLE)*param_1), BVar3 != 1))
                goto LAB_00404b8f;
                break;
              }
            }
            goto LAB_00404b58;
          }
        }
      }
    }
  }
LAB_00404b8f:
  *(undefined2 *)(param_1 + 1) = 0xd7b0;
  DVar1 = GetLastError();
  return DVar1;
}
