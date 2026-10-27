// rea decompile_all
// name: FUN_00572690
// address: 0x572690
// body: available
// range: 0x572690-0x57273e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5726b6 (push 0x57273f followed by fs-segment stack chaining); handler 0x57273f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00572690(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  undefined1 local_108 [256];
  undefined4 local_8;

  puStack_118 = (undefined1 *)0x5726ab;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_11c = &LAB_0057273f;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  if (DAT_00686ab8 == 500) {
    puStack_118 = &stack0xfffffffc;
    FUN_004a17e4(L"INTERNAL ERROR: Adding too many variables");
  }
  else {
    DAT_00686ab8 = DAT_00686ab8 + 1;
    puStack_118 = &stack0xfffffffc;
    FUN_00408448(local_108,local_8,0xff);
    iVar1 = DAT_00686ab8;
    FUN_00404cfc(&DAT_008452d4 + DAT_00686ab8 * 0x14,local_108,0x40);
    (&DAT_00845318)[iVar1 * 0x14] = param_2;
    *(undefined4 *)(&DAT_0084531c + iVar1 * 0x50) = param_3;
    (&DAT_00845320)[iVar1 * 0x50] = param_4;
  }
  puVar2 = puStack_118;
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_00572746;
  puStack_11c = (undefined1 *)0x57273e;
  thunk_FUN_004072d8(&local_8,uStack_120,puVar2);
  return;
}
