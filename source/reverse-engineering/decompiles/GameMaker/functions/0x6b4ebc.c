// rea decompile_all
// name: FUN_006b4ebc
// address: 0x6b4ebc
// body: available
// range: 0x6b4ebc-0x6b4fbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b4ee4 (push 0x6b4fbf followed by fs-segment stack chaining); handler 0x6b4fbf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b4ebc(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  uint uStack_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = *param_4;
  local_c = param_4[1];
  uStack_8 = param_4[2];
  puStack_28 = &LAB_006b4fbf;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_00488540();
  iVar3 = FUN_00487c20();
  FUN_0045b0d0(*(undefined4 *)(iVar3 + 0x40),0);
  FUN_00488540();
  iVar3 = FUN_00487c20();
  FUN_0045b498(*(undefined4 *)(iVar3 + 0x40),0);
  if ((*(char *)(param_1 + 0x32e) != '\0') && (*PTR_DAT_00782878 != '\0')) {
    FUN_00488540();
    iVar3 = FUN_00487c20();
    FUN_0045b0d0(*(undefined4 *)(iVar3 + 0x40),*(undefined4 *)(PTR_DAT_00781914 + local_c * 4));
    if (local_c == 1) {
      FUN_00488540();
      iVar3 = FUN_00487c20();
      FUN_0045b498(*(undefined4 *)(iVar3 + 0x40),1);
    }
    if (local_c == 3) {
      FUN_00488540();
      iVar3 = FUN_00487c20();
      FUN_0045b498(*(undefined4 *)(iVar3 + 0x40),2);
    }
  }
  FUN_00408034(&local_14,local_10 & 0xffff);
  uVar2 = local_14;
  FUN_00488540();
  piVar4 = (int *)FUN_00487c20();
  (**(code **)(*piVar4 + 0x88))(piVar4,param_2,param_3);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uVar2;
  puStack_28 = &LAB_006b4fc6;
  uStack_2c = 0x6b4fbe;
  thunk_FUN_00406e5c(&local_14,uVar2,puVar1);
  return;
}
