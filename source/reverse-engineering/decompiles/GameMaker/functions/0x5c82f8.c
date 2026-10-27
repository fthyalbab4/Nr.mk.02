// rea decompile_all
// name: FUN_005c82f8
// address: 0x5c82f8
// body: available
// range: 0x5c82f8-0x5c8381 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c8310 (push 0x5c8382 followed by fs-segment stack chaining); handler 0x5c8382 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c82f8(undefined4 param_1,short *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_005c8382;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (DAT_0077d678 == '\0') {
    bVar3 = false;
  }
  else {
    bVar3 = *param_2 == 0xb;
  }
  if (bVar3) {
    puStack_18 = &stack0xfffffffc;
    uVar2 = FUN_00426d24(param_2);
    FUN_005c81a4(param_1,(&PTR_u_false_0077d684)[uVar2 & 0x7f]);
  }
  else {
    FUN_0042c240(param_2,&local_c);
    FUN_00408130(&local_8,local_c);
    FUN_005c81a4(param_1,local_8);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005c8389;
  puStack_1c = (undefined1 *)0x5c8379;
  FUN_00407a78(&local_c,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x5c8381;
  thunk_FUN_00406e5c(&local_8);
  return;
}
