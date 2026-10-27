// rea decompile_all
// name: FUN_00449974
// address: 0x449974
// body: available
// range: 0x449974-0x449a0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x449990 (push 0x449a0c followed by fs-segment stack chaining); handler 0x449a0c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00449974(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;

  puStack_1c = &stack0xfffffffc;
  local_10 = 0;
  puStack_20 = &LAB_00449a0c;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar2 = &stack0xfffffffc;
  if (param_1[8] == 0) {
    puVar2 = &stack0xfffffffc;
    if (DAT_0077405c != (code *)0x0) {
      (*DAT_0077405c)(param_1);
      puVar2 = puStack_1c;
    }
    puStack_1c = puVar2;
    puVar2 = puStack_1c;
    if (param_1[8] == 0) {
      FUN_00405954(*param_1,&local_10);
      local_c = local_10;
      local_8 = 0x11;
      FUN_0041c0bc(&PTR_LAB_0042ef28,1,PTR_PTR_0078256c,0,&local_c);
      FUN_00406618();
      puVar2 = puStack_1c;
    }
  }
  puStack_1c = puVar2;
  uVar3 = FUN_0040b140(param_2);
  puVar1 = (undefined4 *)param_1[8];
  (**(code **)*puVar1)();
  *in_FS_OFFSET = puVar1;
  thunk_FUN_00406e5c(&local_10,puVar1,uVar3,&LAB_00449a13);
  return;
}
