// rea decompile_all
// name: FUN_004f2b80
// address: 0x4f2b80
// body: available
// range: 0x4f2b80-0x4f2c05 inclusive
// range: 0x4f2c0d-0x4f2c12 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f2bcb (push 0x4f2c06 followed by fs-segment stack chaining); handler 0x4f2c06 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f2b80(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 local_18 [16];
  int *local_8;

  puStack_24 = (undefined1 *)0x4f2b95;
  local_8 = param_1;
  cVar2 = FUN_004f7a54(param_1);
  if ((cVar2 != '\0') && ((*(byte *)(local_8 + 7) & 8) == 0)) {
    if ((short)local_8[0x6b] == 0) {
      puStack_24 = (undefined1 *)0x4f2bc0;
      FUN_004f2c14(local_8);
      puStack_28 = &LAB_004f2c06;
      uStack_2c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_2c;
      puStack_24 = &stack0xfffffffc;
      (**(code **)(*local_8 + 0x54))(local_8,local_18);
      (**(code **)(*local_8 + 0xa4))(local_8,param_2,local_18);
      puVar1 = puStack_24;
      *in_FS_OFFSET = uStack_2c;
      puStack_24 = (undefined1 *)0x4f2c0d;
      local_8[0x15] = local_8[0x15] & 0xffffffef;
      puStack_28 = (undefined1 *)0x4f2c05;
      FUN_004f2c1c(local_8,uStack_2c,puVar1);
      return;
    }
    local_8[0x15] = local_8[0x15] | 0x10;
  }
  return;
}
