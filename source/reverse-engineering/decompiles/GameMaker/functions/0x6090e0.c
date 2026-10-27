// rea decompile_all
// name: FUN_006090e0
// address: 0x6090e0
// body: available
// range: 0x6090e0-0x60915a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6090f2 (push 0x60915b followed by fs-segment stack chaining); handler 0x60915b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006090e0(int *param_1,char param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;

  puStack_c = &stack0xfffffffc;
  puStack_10 = &LAB_0060915b;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_2 != '\0') {
    cVar2 = (**(code **)(*param_1 + 0x68))();
    puVar1 = puStack_c;
    if (cVar2 != '\0') {
      (**(code **)(*local_8 + 0x70))();
      puVar1 = puStack_c;
    }
  }
  puStack_c = puVar1;
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_00609162;
  if ((local_8[0x26] != 0) && (*(char *)(local_8[0x26] + 0xb4) != '\0')) {
    puStack_10 = (undefined1 *)0x60913a;
    FUN_005f51c0(local_8,3,puVar1);
    puStack_10 = (undefined1 *)0x609148;
    (**(code **)(*(int *)local_8[0x26] + 0x78))();
    puStack_10 = (undefined1 *)0x609150;
    (**(code **)(*local_8 + 0x44))();
    puStack_10 = (undefined1 *)0x60915a;
    FUN_005f51c0(local_8,4);
  }
  return;
}
