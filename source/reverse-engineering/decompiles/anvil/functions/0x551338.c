// rea decompile_all
// name: FUN_00551338
// address: 0x551338
// body: available
// range: 0x551338-0x5513bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x551357 (push 0x5513be followed by fs-segment stack chaining); handler 0x5513be lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00551338(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_005513be;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_3;
  local_8 = param_2;
  FUN_00408520(param_3,8);
  FUN_00408194(local_c,0);
  iVar3 = 8;
  puVar2 = &DAT_006862b0;
  do {
    if ((local_8 & *puVar2) == *puVar2) {
      FUN_00408310(&local_10,(short)puVar2[1]);
      FUN_004085b8(local_c,local_10);
    }
    puVar1 = puStack_20;
    puVar2 = (uint *)((int)puVar2 + 6);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005513c5;
  puStack_24 = (undefined1 *)0x5513bd;
  thunk_FUN_004072d8(&local_10,uStack_28,puVar1);
  return;
}
