// rea decompile_all
// name: FUN_005e08f0
// address: 0x5e08f0
// body: available
// range: 0x5e08f0-0x5e09d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e0916 (push 0x5e09d8 followed by fs-segment stack chaining); handler 0x5e09d8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e08f0(undefined4 *param_1,undefined4 param_2,char param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  local_10 = 0;
  puStack_20 = (undefined1 *)0x5e090b;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  bVar5 = true;
  puStack_24 = &LAB_005e09d8;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_00408640(local_8,&LAB_005e09f4);
  if (bVar5) {
    iVar2 = FUN_00408a68(local_8,*param_1);
  }
  else {
    FUN_00415690(*param_1,&local_c);
    uVar7 = local_c;
    FUN_00415690(local_8,&local_10);
    iVar2 = (*ram0x0077d7fc)(local_10,uVar7);
  }
  if (iVar2 == 0) {
    FUN_00407eb8(param_4,*param_1);
    if (param_3 != '\0') {
      FUN_00407eb8(param_1,0);
    }
  }
  else {
    iVar4 = iVar2 + -1;
    if (SBORROW4(iVar2,1)) {
      FUN_00405944();
      iVar4 = extraout_ECX;
    }
    FUN_004086a8(*param_1,1,iVar4,param_4);
    if (param_3 != '\0') {
      puVar6 = param_1;
      FUN_00407058(&local_8);
      iVar3 = FUN_00408238();
      iVar4 = iVar3 + iVar2;
      if (SCARRY4(iVar3,iVar2)) {
        FUN_00405944(iVar3,iVar4);
        iVar4 = extraout_EDX;
      }
      FUN_004086a8(*param_1,iVar4,0x7fffffff,puVar6);
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005e09df;
  puStack_24 = (undefined1 *)0x5e09d7;
  thunk_FUN_00406e80(&local_10,3,puVar1);
  return;
}
