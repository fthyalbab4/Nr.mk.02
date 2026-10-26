// rea decompile_all
// name: FUN_005e07ec
// address: 0x5e07ec
// body: available
// range: 0x5e07ec-0x5e08cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e080d (push 0x5e08ce followed by fs-segment stack chaining); handler 0x5e08ce lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e07ec(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 char param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uVar6;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x5e0802;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_1c = &LAB_005e08ce;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  bVar5 = param_5 == '\0';
  if (bVar5) {
    puStack_24 = param_4;
    puStack_18 = &stack0xfffffffc;
    FUN_005e08f0(param_1,local_8,param_3);
  }
  else {
    puStack_18 = &stack0xfffffffc;
    FUN_00408640(local_8,&DAT_005e08ec);
    if (bVar5) {
      puStack_24 = (undefined4 *)0x5e0833;
      iVar2 = FUN_00408a68(local_8,*param_1);
    }
    else {
      puStack_24 = (undefined4 *)0x5e0842;
      iVar2 = (*ram0x0077d7fc)(local_8,*param_1);
    }
    if (iVar2 == 0) {
      FUN_00407eb8(param_4,*param_1);
      if ((char)param_3 != '\0') {
        FUN_00407eb8(param_1,0);
      }
    }
    else {
      puStack_24 = param_4;
      if (SBORROW4(iVar2,1)) {
        FUN_00405944();
      }
      uVar6 = 0x5e087d;
      FUN_004086a8(*param_1,1);
      if ((char)param_3 != '\0') {
        FUN_00407058(&local_8);
        iVar3 = FUN_00408238();
        iVar4 = iVar3 + iVar2;
        if (SCARRY4(iVar3,iVar2)) {
          FUN_00405944(iVar3,iVar4);
          iVar4 = extraout_EDX;
        }
        FUN_004086a8(*param_1,iVar4,0x7fffffff,uVar6);
        puStack_24 = param_1;
      }
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = puStack_24;
  puStack_1c = &LAB_005e08d5;
  uStack_20 = 0x5e08cd;
  thunk_FUN_00406e5c(&local_8,puStack_24,puVar1);
  return;
}
