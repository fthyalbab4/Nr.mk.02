// rea decompile_all
// name: FUN_005369ac
// address: 0x5369ac
// body: available
// range: 0x5369ac-0x536a46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5369c7 (push 0x536a47 followed by fs-segment stack chaining); handler 0x536a47 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005369ac(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_c;
  int *local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  puStack_20 = &LAB_00536a47;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  if (*param_3 != 0) {
    FUN_0040b268(&local_8);
    uVar2 = (**(code **)*param_1)();
    puVar1 = puStack_1c;
    if ((uVar2 & 0x80000000) == 0) {
      FUN_0040b268(&local_c);
      uVar2 = (**(code **)(*local_8 + 0x10))();
      puVar1 = puStack_1c;
      if ((uVar2 & 0x80000000) == 0) {
        uVar2 = (**(code **)(*local_c + 0x18))();
        puVar1 = puStack_1c;
        if ((uVar2 & 0x80000000) == 0) {
          *param_3 = 0;
        }
      }
    }
  }
  puStack_1c = puVar1;
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00536a4e;
  puStack_20 = (undefined1 *)0x536a3e;
  FUN_0040b268(&local_c,uStack_24,puVar1);
  puStack_20 = (undefined1 *)0x536a46;
  FUN_0040b268(&local_8);
  return;
}
