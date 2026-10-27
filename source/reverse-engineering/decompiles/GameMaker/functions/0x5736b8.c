// rea decompile_all
// name: FUN_005736b8
// address: 0x5736b8
// body: available
// range: 0x5736b8-0x5738e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005736b8(int param_1,HDC param_2)

{
  char cVar1;
  undefined4 uVar2;
  int y;
  int x;
  uint uVar3;
  tagRECT *ptVar4;
  tagRECT local_2c;
  undefined1 local_1c [12];

  if (*(char *)(param_1 + 0x2d4) != '\0') {
    FUN_00573acc(param_1,&local_2c);
    uVar3 = 0;
    if (*(char *)(param_1 + 0x2d4) == '\x01') {
      FUN_00503a6c();
      cVar1 = FUN_00503b78();
      if (cVar1 == '\0') {
        if (*(char *)(param_1 + 0x2de) != '\0') {
          uVar3 = 0x4000;
        }
        DrawEdge(param_2,&local_2c,5,uVar3 | 0x80f);
      }
      else {
        if (*(char *)(param_1 + 0x2de) == '\0') {
          if (*(char *)(param_1 + 0x2f0) == '\0') {
            uVar2 = FUN_00503a6c();
            FUN_00503f3c(uVar2,2,local_1c);
          }
          else {
            uVar2 = FUN_00503a6c();
            FUN_00503f3c(uVar2,3,local_1c);
          }
        }
        else {
          uVar2 = FUN_00503a6c();
          FUN_00503f3c(uVar2,4,local_1c);
        }
        ptVar4 = &local_2c;
        uVar2 = FUN_00503a6c();
        FUN_00503d0c(uVar2,param_2,local_1c,ptVar4);
      }
      x = ((uint)(local_2c.right - local_2c.left) >> 1) + local_2c.left + -1 +
          (uint)*(byte *)(param_1 + 0x2de);
      y = ((uint)(local_2c.bottom - local_2c.top) >> 1) + local_2c.top + -1 +
          (uint)*(byte *)(param_1 + 0x2de);
      uVar3 = *(uint *)(param_1 + 0x2c8) >> 3;
      if (uVar3 == 0) {
        uVar3 = 1;
      }
      PatBlt(param_2,x,y,uVar3,uVar3,0x42);
      PatBlt(param_2,x + uVar3 * -2,y,uVar3,uVar3,0x42);
      PatBlt(param_2,x + uVar3 * 2,y,uVar3,uVar3,0x42);
    }
    else if (*(char *)(param_1 + 0x2d4) == '\x02') {
      FUN_00503a6c();
      cVar1 = FUN_00503b78();
      if (cVar1 == '\0') {
        if (*(int *)(param_1 + 0x2d0) == 0) {
          uVar3 = 0x100;
        }
        else if (*(char *)(param_1 + 0x2de) != '\0') {
          uVar3 = 0x4200;
        }
        DrawFrameControl(param_2,&local_2c,3,uVar3 | 5);
      }
      else {
        if (*(int *)(param_1 + 0x2d0) == 0) {
          uVar2 = FUN_00503a6c();
          FUN_00503fe8(uVar2,5,local_1c);
        }
        else if (*(char *)(param_1 + 0x2de) == '\0') {
          if (*(char *)(param_1 + 0x2f0) == '\0') {
            uVar2 = FUN_00503a6c();
            FUN_00503fe8(uVar2,2,local_1c);
          }
          else {
            uVar2 = FUN_00503a6c();
            FUN_00503fe8(uVar2,3,local_1c);
          }
        }
        else {
          uVar2 = FUN_00503a6c();
          FUN_00503fe8(uVar2,4,local_1c);
        }
        ptVar4 = &local_2c;
        uVar2 = FUN_00503a6c();
        FUN_00503d0c(uVar2,param_2,local_1c,ptVar4);
      }
    }
    ExcludeClipRect(param_2,local_2c.left,local_2c.top,local_2c.right,local_2c.bottom);
  }
  FUN_004f4b2c(param_1,param_2);
  return;
}
