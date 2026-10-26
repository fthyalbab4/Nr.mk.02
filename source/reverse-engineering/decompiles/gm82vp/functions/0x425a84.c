// rea decompile_all
// name: FUN_00425a84
// address: 0x425a84
// body: available
// range: 0x425a84-0x425b0a inclusive
// range: 0x425b26-0x425b2e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x425ae7 (push 0x425b0b followed by fs-segment stack chaining); handler 0x425b0b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00425a84(short *param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puStack_1c = &stack0xfffffffc;
  sVar1 = *param_1;
  if (sVar1 == 0) {
    uVar2 = 0;
  }
  else if (sVar1 == 1) {
    if (DAT_0067ce6c != '\0') {
      puStack_1c = (undefined1 *)0x425ac6;
      FUN_00424264(1,0x11);
    }
    uVar2 = 0;
  }
  else if (sVar1 == 0xb) {
    uVar2 = (uint)*(byte *)(param_1 + 4);
  }
  else if (sVar1 == 0x11) {
    uVar2 = (uint)*(byte *)(param_1 + 4);
  }
  else {
    puStack_20 = &LAB_00425b0b;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    uVar2 = FUN_00425520(param_1);
    if (0xff < uVar2) {
      thunk_FUN_00404480();
    }
    *in_FS_OFFSET = uStack_24;
  }
  return uVar2;
}
