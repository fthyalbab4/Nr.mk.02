// rea decompile_all
// name: FUN_0067d7c0
// address: 0x67d7c0
// body: available
// range: 0x67d7c0-0x67d98e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67d7de (push 0x67d9b1 followed by fs-segment stack chaining); handler 0x67d9b1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67d800 (push 0x67d98f followed by fs-segment stack chaining); handler 0x67d98f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067d7c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  HDC hdc;
  LPRECT lprc;
  LPCWSTR lpchText;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  undefined4 auStackY_17f4 [1510];
  int iVar7;
  UINT format;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined1 local_c;
  int local_8;

  bVar6 = 0;
  puStack_34 = &stack0xfffffffc;
  local_1c = 0;
  local_20 = 0;
  puStack_38 = &LAB_0067d9b1;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_40 = (undefined1 *)0x67d7ef;
  uVar2 = FUN_0067f98c(&PTR_LAB_0067a6c8,1,0);
  *(undefined4 *)(param_4 + -0x20) = uVar2;
  puStack_44 = &LAB_0067d98f;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_8 = 8;
  puStack_40 = &stack0xfffffffc;
  FUN_004edce0(*(undefined4 *)(param_4 + -0x20),param_1);
  iVar7 = param_4;
  iVar3 = FUN_0067d60c(*(undefined4 *)(param_4 + -0x20));
  local_8 = local_8 + iVar3;
  if (*(char *)(*(int *)(param_4 + -0x1c) + 0x38) != '\0') {
    local_8 = local_8 + 0x1e;
  }
  if ((*(byte *)(*(int *)(param_4 + -0x24) + 0x48) & 1) != 0) {
    FUN_0045b498(*(undefined4 *)(*(int *)(*(int *)(param_4 + -0x20) + 0x270) + 0x40),1,iVar7);
    FUN_0040c114(8,0,*(int *)(*(int *)(param_4 + -0x20) + 0x48) + -0x10,&local_18,0);
    puVar4 = (undefined4 *)(param_4 + -0xc + (uint)bVar6 * -8);
    *(undefined4 *)(param_4 + -0x10) = local_18;
    puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
    *puVar4 = *(undefined4 *)(local_14 + (uint)bVar6 * -8);
    *puVar5 = (&local_10)[(uint)bVar6 * -2 + (uint)bVar6 * -2];
    puVar5[(uint)bVar6 * -2 + 1] =
         (&local_10 + (uint)bVar6 * -2 + (uint)bVar6 * -2)[(uint)bVar6 * -2 + 1];
    FUN_00407f0c(param_4 + -0x28,*(undefined4 *)(*(int *)(param_4 + -0x1c) + 0xc));
    iVar7 = *(int *)(*(int *)(param_4 + -0x1c) + 0x18);
    if (((iVar7 != 0) && ((*(byte *)(*(int *)(param_4 + -0x24) + 0x48) & 2) != 0)) &&
       (*(short *)(iVar7 + 0x84) != 0)) {
      puVar4 = &local_1c;
      local_18 = *(undefined4 *)(param_4 + -0x28);
      local_14[0] = 0x11;
      FUN_004d801c(*(undefined2 *)(iVar7 + 0x84),&local_20);
      local_10 = local_20;
      local_c = 0x11;
      FUN_00417d4c(L"%s (%s)",&local_18,1,puVar4);
      FUN_00407f0c(param_4 + -0x28,local_1c);
    }
    *(undefined4 *)(param_4 + -0x18) = 0xc10;
    hdc = (HDC)FUN_0045ce2c(*(undefined4 *)(*(int *)(param_4 + -0x20) + 0x270));
    format = *(UINT *)(param_4 + -0x18);
    lprc = (LPRECT)(param_4 + -0x10);
    iVar7 = -1;
    lpchText = (LPCWSTR)FUN_00407f44(*(undefined4 *)(param_4 + -0x28));
    DrawTextW(hdc,lpchText,iVar7,lprc,format);
    local_8 = local_8 + ((*(int *)(param_4 + -4) + 0xe) - *(int *)(param_4 + -0xc));
  }
  puVar1 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_0067d996;
  puStack_44 = (undefined1 *)0x67d98e;
  FUN_00405a7c(*(undefined4 *)(param_4 + -0x20),uStack_48,puVar1);
  return;
}
