// rea decompile_all
// name: FUN_00742e84
// address: 0x742e84
// body: available
// range: 0x742e84-0x742eed inclusive
// range: 0x742ef5-0x742f21 inclusive
// range: 0x742f2c-0x742f42 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x742e9c (push 0x742f22 followed by fs-segment stack chaining); handler 0x742f22 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x742ec0 (push 0x742eee followed by fs-segment stack chaining); handler 0x742eee lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00742e84(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = &stack0xfffffffc;
  DAT_00781354 = 1;
  puStack_18 = &LAB_00742f22;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (DAT_00781350 != (undefined4 *)0x0) {
    puStack_20 = (undefined1 *)0x742eb5;
    puStack_14 = &stack0xfffffffc;
    FUN_00743f5c(DAT_00826450,0xffffffff);
    puStack_24 = &LAB_00742eee;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    *DAT_00781350 = 0;
    puStack_20 = &stack0xfffffffc;
    FUN_00738b20(&DAT_00781350);
    puVar2 = puStack_20;
    *in_FS_OFFSET = uStack_28;
    puStack_20 = (undefined1 *)0x742ef5;
    puStack_24 = (undefined1 *)0x742eed;
    FUN_0074416c(DAT_00826450,uStack_28,puVar2);
    return;
  }
  puVar2 = &stack0xfffffffc;
  if ((DAT_0078134c != 0) && (puVar2 = &stack0xfffffffc, DAT_00781348 != '\0')) {
    puStack_20 = (undefined1 *)0x742f11;
    FUN_00405a7c(DAT_0078134c);
    puVar2 = puStack_14;
  }
  puStack_14 = puVar2;
  puVar2 = puStack_14;
  DAT_0078134c = 0;
  *in_FS_OFFSET = uStack_1c;
  uVar1 = DAT_00826450;
  DAT_00826450 = 0;
  puStack_14 = (undefined1 *)0x742f3e;
  FUN_00405a7c(uVar1,0,puVar2);
  return;
}
