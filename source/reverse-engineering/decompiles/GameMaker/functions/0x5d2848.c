// rea decompile_all
// name: FUN_005d2848
// address: 0x5d2848
// body: available
// range: 0x5d2848-0x5d296a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d2867 (push 0x5d296b followed by fs-segment stack chaining); handler 0x5d296b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d2848(int *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_005d296b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if ((((param_2 < 0) || (param_3 < 0)) || (param_1[2] < param_3 + param_2)) ||
     (puVar1 = &stack0xfffffffc, param_3 + param_2 < 0)) {
    FUN_0041bfec(&PTR_LAB_004111bc,1,PTR_PTR_00782570);
    FUN_00406618();
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  if (param_3 != 0) {
    FUN_00409be0(&local_8,&DAT_005d3308,1,param_3);
    FUN_0040450c(param_1[1] + param_2 * 4,local_8,param_3 * 4);
    iVar2 = param_1[2] - (param_3 + param_2);
    if (iVar2 < 1) {
      FUN_00404f08(param_1[1] + param_2 * 4,param_3 * 4,0);
    }
    else {
      FUN_0040450c(param_1[1] + (param_3 + param_2) * 4,param_1[1] + param_2 * 4,iVar2 * 4);
      FUN_00404f08(param_1[1] + (param_1[2] - param_3) * 4,param_3 * 4,0);
    }
    param_1[2] = param_1[2] - param_3;
    local_c = FUN_00409a18(local_8);
    if (-1 < local_c + -1) {
      iVar2 = 0;
      do {
        (**(code **)(*param_1 + 4))(param_1,*(undefined4 *)(local_8 + iVar2 * 4),1);
        iVar2 = iVar2 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005d2972;
  puStack_20 = (undefined1 *)0x5d296a;
  FUN_00409ce0(&local_8,&DAT_005d3308,puVar1);
  return;
}
