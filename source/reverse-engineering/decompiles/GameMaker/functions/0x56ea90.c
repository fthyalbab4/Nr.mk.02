// rea decompile_all
// name: FUN_0056ea90
// address: 0x56ea90
// body: available
// range: 0x56ea90-0x56ec72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056ea90(int param_1,LONG *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,uint param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  HDC pHVar3;
  tagRECT *ptVar4;
  undefined4 uVar5;
  UINT UVar6;
  UINT UVar7;
  tagRECT local_1c;
  LONG *local_c;

  local_1c.left = *param_2;
  local_1c.top = param_2[1];
  local_1c.right = param_2[2];
  local_1c.bottom = param_2[3];
  local_c = param_2;
  if ((*(char *)(param_1 + 0x324) == '\x01') && ((param_6 & 4) != 0)) {
    if (5 < *(int *)PTR_DAT_00781bfc) {
      InflateRect(&local_1c,1,1);
    }
    local_1c.bottom = local_1c.bottom + 1;
    FUN_0045ce2c(*(undefined4 *)(param_1 + 0x270));
    uVar1 = FUN_00503a6c();
    FUN_00503b38(uVar1,5);
    (**(code **)PTR_DAT_00781f44)();
    FUN_0045bda4(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),1);
  }
  else if ((*(char *)(param_1 + 0x324) == '\x02') && ((param_6 & 4) != 0)) {
    if ((*(byte *)(param_1 + 0x2b4) & 1) == 0) {
      local_1c.right = local_1c.right + 1;
    }
    if ((*(byte *)(param_1 + 0x2b4) & 2) == 0) {
      local_1c.bottom = local_1c.bottom + 1;
    }
    if (((param_6 & 0x10) == 0) && ((param_6 & 0x20) == 0)) {
      FUN_0046fdbc(*(undefined4 *)(param_1 + 0x270),*(undefined4 *)(param_1 + 0x2ac),
                   *(undefined4 *)(param_1 + 0x2a8),1,&local_1c);
    }
    else if ((param_6 & 0x20) == 0) {
      ptVar4 = &local_1c;
      uVar5 = 1;
      uVar1 = FUN_0046f990(*(undefined4 *)(param_1 + 0x2a8),0x13,param_3,1,ptVar4);
      uVar2 = FUN_0046f990(*(undefined4 *)(param_1 + 0x2ac),0x13);
      FUN_0046fdbc(*(undefined4 *)(param_1 + 0x270),uVar2,uVar1,uVar5,ptVar4);
    }
    else {
      FUN_0046fdbc(*(undefined4 *)(param_1 + 0x270),*(undefined4 *)(param_1 + 0x2a8),
                   *(undefined4 *)(param_1 + 0x2ac),1,&local_1c);
    }
    FUN_0045bda4(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),1);
  }
  else {
    FUN_0045bc24(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),param_3);
    (**(code **)(**(int **)(param_1 + 0x270) + 0x4c))(*(int **)(param_1 + 0x270),&local_1c);
    if ((param_6 & 0x20) != 0) {
      local_1c.right = local_1c.right + -1;
      local_1c.bottom = local_1c.bottom + -1;
      UVar7 = 3;
      UVar6 = 8;
      ptVar4 = &local_1c;
      pHVar3 = (HDC)FUN_0045ce2c(*(undefined4 *)(param_1 + 0x270));
      DrawEdge(pHVar3,ptVar4,UVar6,UVar7);
      UVar7 = 0xc;
      UVar6 = 8;
      ptVar4 = &local_1c;
      pHVar3 = (HDC)FUN_0045ce2c(*(undefined4 *)(param_1 + 0x270));
      DrawEdge(pHVar3,ptVar4,UVar6,UVar7);
    }
  }
  return;
}
