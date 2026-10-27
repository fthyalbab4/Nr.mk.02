// rea decompile_all
// name: FUN_00630bd4
// address: 0x630bd4
// body: available
// range: 0x630bd4-0x630e5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x630c07 (push 0x630e5b followed by fs-segment stack chaining); handler 0x630e5b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00630bd4(int param_1,int param_2,int param_3,undefined4 param_4,char param_5,char param_6,
                 int param_7)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *local_34;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_8;

  local_34 = &stack0xfffffffc;
  local_8 = 0;
  for (iVar10 = param_3 * 2 + 1; -1 < iVar10; iVar10 = iVar10 + -1) {
    unaff_EDI = *(int *)(param_2 + iVar10 * 4);
  }
  puVar9 = (undefined4 *)&stack0xffffffd0;
  puStack_38 = &LAB_00630e5b;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  FUN_00409be0(&local_8,&DAT_00630bb0,1,param_7);
  local_20 = unaff_ESI;
  local_1c = unaff_ESI;
  local_18 = unaff_EDI;
  local_14 = unaff_EDI;
  if (-1 < param_7 + -1) {
    iVar2 = 0;
    iVar10 = param_7;
    local_20 = unaff_ESI;
    local_1c = unaff_ESI;
    do {
      *(undefined4 *)(local_8 + iVar2 * 8) = *puVar9;
      *(undefined4 *)(local_8 + 4 + iVar2 * 8) = puVar9[1];
      iVar5 = *(int *)(local_8 + iVar2 * 8);
      iVar6 = iVar5;
      if (local_14 < iVar5) {
        iVar6 = local_14;
      }
      if (iVar5 < local_18) {
        iVar5 = local_18;
      }
      iVar8 = *(int *)(local_8 + 4 + iVar2 * 8);
      iVar7 = iVar8;
      if (local_1c < iVar8) {
        iVar7 = local_1c;
      }
      if (iVar8 < local_20) {
        iVar8 = local_20;
      }
      iVar2 = iVar2 + 1;
      puVar9 = puVar9 + 2;
      iVar10 = iVar10 + -1;
      local_20 = iVar8;
      local_1c = iVar7;
      local_18 = iVar5;
      local_14 = iVar6;
    } while (iVar10 != 0);
  }
  FUN_0062f8ec(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  FUN_0062f940(local_14,local_1c,local_18,local_20);
  if (param_5 == '\0') {
    iVar10 = FUN_00462a64(DAT_0077f0e4);
    FUN_0045bc24(*(undefined4 *)(iVar10 + 0x48),0);
  }
  else {
    iVar10 = FUN_00462a64(DAT_0077f0e4);
    FUN_0045bc24(*(undefined4 *)(iVar10 + 0x48),0xff00);
  }
  iVar10 = FUN_00462a64(DAT_0077f0e4);
  FUN_0045b850(*(undefined4 *)(iVar10 + 0x44),0xff);
  iVar10 = FUN_00462a64(DAT_0077f0e4);
  FUN_0045b9a4(*(undefined4 *)(iVar10 + 0x44),DAT_0078a0ec);
  if (DAT_0078a0f4 != '\0') {
    if (-1 < param_7 + -1) {
      iVar10 = 0;
      do {
        *(int *)(local_8 + iVar10 * 8) = *(int *)(local_8 + iVar10 * 8) * 2;
        *(int *)(local_8 + 4 + iVar10 * 8) = *(int *)(local_8 + 4 + iVar10 * 8) * 2;
        iVar10 = iVar10 + 1;
        param_7 = param_7 + -1;
      } while (param_7 != 0);
    }
    iVar10 = FUN_00462a64(DAT_0077f0e4);
    FUN_0045b9a4(*(undefined4 *)(iVar10 + 0x44),DAT_0078a0ec * 2);
  }
  if (param_6 == '\0') {
    uVar3 = FUN_00409a20(local_8);
    piVar4 = (int *)FUN_00462a64(DAT_0077f0e4);
    (**(code **)(*piVar4 + 100))(piVar4,local_8,uVar3);
  }
  else {
    uVar3 = FUN_00409a20(local_8);
    piVar4 = (int *)FUN_00462a64(DAT_0077f0e4);
    (**(code **)(*piVar4 + 0x68))(piVar4,local_8,uVar3);
  }
  FUN_00630034(param_1,local_14,local_1c,local_20,local_18);
  iVar10 = (local_14 - DAT_0078a0ec) + -2;
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  iVar2 = (local_1c - DAT_0078a0ec) + -2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar5 = local_18 + DAT_0078a0ec + 2;
  if (*(int *)(param_1 + 4) < iVar5) {
    iVar5 = *(int *)(param_1 + 4);
  }
  local_24 = local_20 + DAT_0078a0ec + 2;
  if (*(int *)(param_1 + 8) < local_24) {
    local_24 = *(int *)(param_1 + 8);
  }
  FUN_00438c38(iVar10,iVar2,iVar5,param_4,local_24);
  puVar1 = local_34;
  *in_FS_OFFSET = uStack_3c;
  local_34 = &LAB_00630e62;
  puStack_38 = (undefined1 *)0x630e5a;
  FUN_00409ce0(&local_8,&DAT_00630bb0,puVar1);
  return;
}
