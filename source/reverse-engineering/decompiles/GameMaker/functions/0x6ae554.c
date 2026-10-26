// rea decompile_all
// name: FUN_006ae554
// address: 0x6ae554
// body: available
// range: 0x6ae554-0x6ae5fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ae58d (push 0x6ae5fd followed by fs-segment stack chaining); handler 0x6ae5fd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ae554(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  undefined4 local_8;

  puStack_20 = (undefined1 *)0x6ae566;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_20 = (undefined1 *)0x6ae574;
  FUN_00408d1c(local_10,&DAT_006ab278);
  puStack_20 = (undefined1 *)0x6ae582;
  FUN_00408d1c(local_18,&DAT_006ac9e4);
  puStack_24 = &LAB_006ae5fd;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  DAT_0077f3d8 = 0;
  puStack_20 = &stack0xfffffffc;
  cVar2 = FUN_006ac7e0(local_8,local_10);
  if ((cVar2 != '\0') && (cVar2 = FUN_006acce8(local_8,local_10,local_18), cVar2 != '\0')) {
    FUN_006ae2e8(local_8,local_18);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006ae604;
  puStack_24 = (undefined1 *)0x6ae5e6;
  FUN_00408df4(local_18,&DAT_006ac9e4,puVar1);
  puStack_24 = (undefined1 *)0x6ae5f4;
  FUN_00408df4(local_10,&DAT_006ab278);
  puStack_24 = (undefined1 *)0x6ae5fc;
  thunk_FUN_00406e5c(&local_8);
  return;
}
