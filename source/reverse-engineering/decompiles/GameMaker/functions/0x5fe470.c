// rea decompile_all
// name: FUN_005fe470
// address: 0x5fe470
// body: available
// range: 0x5fe470-0x5fe5a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5fe491 (push 0x5fe5a3 followed by fs-segment stack chaining); handler 0x5fe5a3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005fe470(int param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  uint uVar5;
  uint extraout_EDX;
  uint extraout_EDX_00;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int *local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_28 = &LAB_005fe5a3;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  local_18 = param_2;
  local_10 = param_1;
  if (param_2 == (int *)0x0) {
    local_18 = *(int **)(param_1 + 0xd4);
    local_14 = param_2;
    FUN_005e02b4(&local_18);
    puVar1 = puStack_24;
  }
  puStack_24 = puVar1;
  local_14 = local_18;
  iVar3 = (**(code **)(*local_18 + 0x10))(local_18,2);
  FUN_00409be0(&local_8,&DAT_004108f8,1,iVar3);
  FUN_00409be0(&local_c,&DAT_00412fa0,1,2);
  iVar4 = 0;
  if (0 < iVar3) {
    iVar6 = 1;
    do {
      uVar2 = FUN_005fe654(local_10);
      uVar5 = iVar6 - 1;
      if (SBORROW4(iVar6,1)) {
        uVar2 = FUN_00405944();
        uVar5 = extraout_EDX;
      }
      if ((local_8 == 0) || (iVar4 = local_8, *(uint *)(local_8 + -4) <= uVar5)) {
        uVar2 = thunk_FUN_00404478();
        iVar4 = extraout_ECX;
        uVar5 = extraout_EDX_00;
      }
      *(undefined1 *)(iVar4 + uVar5) = uVar2;
      iVar4 = FUN_00421df4(local_14,local_8,0,0,&local_c,iVar6);
      if (0 < iVar4) break;
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (iVar4 != 1) {
    FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\Core\\IdIOHandler.pas",
                 0x404);
  }
  if ((local_c == 0) || (*(int *)(local_c + -4) == 0)) {
    thunk_FUN_00404478();
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005fe5aa;
  puStack_28 = (undefined1 *)0x5fe594;
  FUN_00409ce0(&local_c,&DAT_00412fa0,puVar1);
  puStack_28 = (undefined1 *)0x5fe5a2;
  FUN_00409ce0(&local_8,&DAT_004108f8);
  return;
}
