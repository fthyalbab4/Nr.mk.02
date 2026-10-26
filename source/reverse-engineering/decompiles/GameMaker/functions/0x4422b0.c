// rea decompile_all
// name: FUN_004422b0
// address: 0x4422b0
// body: available
// range: 0x4422b0-0x4422ee inclusive
// range: 0x442315-0x4423db inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4422cb (push 0x4423dc followed by fs-segment stack chaining); handler 0x4423dc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004422b0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_10;
  undefined4 local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  uStack_10 = 0;
  puStack_24 = &LAB_004423dc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  uVar2 = FUN_004435d8(param_1);
  switch(uVar2 & 0x7f) {
  case 0:
    FUN_00407eb8(param_2,L"Null");
    break;
  default:
    FUN_004410fc();
    break;
  case 7:
    FUN_00441780(param_1,(int)&uStack_10 + 3,1);
    FUN_00406f94(&local_8,0,uStack_10._3_1_,0);
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 1)) {
      FUN_00407078(&local_8,local_8,0);
    }
    uVar3 = thunk_FUN_00407688(&local_8);
    FUN_00441780(param_1,uVar3,uStack_10._3_1_);
    FUN_0040b52c(local_8,&local_c);
    FUN_00407eb8(param_2,local_c);
    break;
  case 8:
    FUN_00407eb8(param_2,L"False");
    break;
  case 9:
    FUN_00407eb8(param_2,L"True");
    break;
  case 0xd:
    FUN_00407eb8(param_2,&DAT_00442428);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004423e3;
  puStack_24 = (undefined1 *)0x4423d3;
  thunk_FUN_00406e5c(&local_c,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x4423db;
  FUN_00406e5c(&local_8);
  return;
}
