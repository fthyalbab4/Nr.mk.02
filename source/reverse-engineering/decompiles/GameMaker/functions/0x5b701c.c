// rea decompile_all
// name: FUN_005b701c
// address: 0x5b701c
// body: available
// range: 0x5b701c-0x5b70bc inclusive
// range: 0x5b70bf-0x5b70e0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b7039 (push 0x5b70e1 followed by fs-segment stack chaining); handler 0x5b70e1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing reports a terminal call at 0x5b70b8 to 0x406618 FUN_00406618 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b701c(int param_1,int param_2,int param_3,char param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_005b70e1;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  local_8 = param_3;
  if (param_1 == -0x7ffdfff7) {
    puStack_20 = &stack0xfffffffc;
    FUN_00408130(&local_c,*(undefined4 *)(param_2 + 4),param_3,*(undefined4 *)(param_2 + 0x1c));
    uVar4 = local_c;
    FUN_00408130(&local_10,*(undefined4 *)(param_2 + 0xc));
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    uVar3 = local_10;
    FUN_00408130(&local_14,*(undefined4 *)(param_2 + 8));
    uVar2 = FUN_005b6368(&PTR_LAB_005b5f14,1,local_14,uVar2,uVar3);
    if (param_4 != '\0') {
      FUN_00408f54(param_2,&LAB_0040f2fc);
    }
  }
  else {
    uVar4 = 0;
    uVar2 = FUN_005b6294(&PTR_LAB_005b5dc8,1,0,0,param_1);
  }
  if (local_8 != 0) {
    FUN_00406618(uVar2);
    return;
  }
  FUN_00406618(uVar2);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uVar4;
  puStack_28 = &LAB_005b70e8;
  thunk_FUN_00406e80(&local_14,3,puVar1);
  return;
}
