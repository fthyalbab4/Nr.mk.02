// rea decompile_all
// name: FUN_005c06ac
// address: 0x5c06ac
// body: available
// range: 0x5c06ac-0x5c0752 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c06c9 (push 0x5c0753 followed by fs-segment stack chaining); handler 0x5c0753 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c06ac(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_005c0753;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  uVar3 = 1;
  puVar1 = &stack0xfffffffc;
  if (param_3 != 0) {
    FUN_00408144(&local_8,param_3);
    uStack_28 = 0x5c06e4;
    cVar2 = FUN_005c05d0(param_1,local_8);
    uVar3 = 0;
    puVar1 = puStack_20;
    if (cVar2 == '\0') goto LAB_005c072e;
  }
  puStack_20 = puVar1;
  uStack_28 = 0x5c06f0;
  uStack_28 = thunk_FUN_00406e5c(&local_c);
  (**(code **)(*param_1 + 0xc))();
  uStack_28 = 0x5c06fc;
  FUN_0040b250();
  uStack_28 = 0x5c0706;
  FUN_00408640(local_c,param_2);
  if (!(bool)uVar3) {
    uStack_28 = 0x5c0710;
    uStack_28 = thunk_FUN_00406e5c(&local_10);
    (**(code **)(*param_1 + 0x44))();
    uStack_28 = 0x5c071c;
    FUN_0040b250();
    uStack_28 = 0x5c0726;
    FUN_00408640(local_10,param_2);
  }
LAB_005c072e:
  *in_FS_OFFSET = puStack_24;
  puStack_20 = (undefined1 *)0x5c074a;
  thunk_FUN_00406e80(&local_10,2,unaff_EDI);
  puStack_20 = (undefined1 *)0x5c0752;
  FUN_00407a78(&local_8);
  return;
}
