// rea decompile_all
// name: FUN_005342d4
// address: 0x5342d4
// body: available
// range: 0x5342d4-0x53434f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5342f8 (push 0x534350 followed by fs-segment stack chaining); handler 0x534350 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005342d4(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  puStack_14 = (undefined1 *)0x5342ed;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_18 = &LAB_00534350;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  do {
    puVar3 = &LAB_00534368;
    uVar4 = DAT_00788974;
    uVar2 = FUN_004047b0(100000);
    FUN_0041666c(uVar2,&local_c);
    uStack_1c = local_8;
    FUN_00408480(param_2,4);
    cVar1 = FUN_00416e40(*param_2);
  } while (cVar1 != '\0');
  *in_FS_OFFSET = uStack_1c;
  thunk_FUN_00406e80(&local_c,2,puVar3,&LAB_00534357,uVar4);
  return;
}
