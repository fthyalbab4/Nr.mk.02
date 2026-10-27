// rea decompile_all
// name: FUN_0071ceb8
// address: 0x71ceb8
// body: available
// range: 0x71ceb8-0x71cf53 inclusive
// range: 0x71d0d0-0x71d135 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x71cee0 (push 0x71d136 followed by fs-segment stack chaining); handler 0x71d136 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071ceb8(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 5;
  do {
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  puStack_24 = &LAB_0071d136;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  piVar4 = (int *)0x0;
  if (param_2 == 1) {
    uStack_2c = 0x71ceff;
    FUN_004d43f8(L"Internal Error: Cannot add root resources.");
  }
  else {
    if (param_2 == 2) {
      uStack_2c = 0x71cf11;
      puStack_20 = &stack0xfffffffc;
      FUN_00407f0c(&local_8,L"group");
      uStack_2c = 0x71cf23;
      cVar2 = FUN_004d49fc(L"Creating a group",L"Provide a name for the group:",&local_8);
      if (cVar2 == '\0') goto LAB_0071d113;
      uStack_2c = 0;
      local_30 = 0x71cf3a;
      piVar4 = (int *)FUN_0071cb48(local_8,2,0);
    }
    else {
      puStack_20 = &stack0xfffffffc;
      if (param_2 == 3) {
        puStack_20 = &stack0xfffffffc;
      }
    }
    local_30 = 0x71d0d7;
    iVar3 = FUN_0071cdcc(param_1);
    if ((iVar3 == 1) || (iVar3 == 2)) {
      local_30 = 0x71d0ec;
      (**(code **)(*piVar4 + 0x10))(piVar4,param_1,2);
    }
    else {
      local_30 = 0x71d0f9;
      (**(code **)(*piVar4 + 0x10))(piVar4,param_1,4);
    }
    uStack_2c = 0x71d100;
    FUN_004ad828(piVar4);
    uStack_2c = 0x71d10c;
    FUN_004b0584(DAT_0079a9e8,piVar4);
    DAT_0077f5f4 = 1;
  }
LAB_0071d113:
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0071d13d;
  puStack_24 = (undefined1 *)0x71d12d;
  thunk_FUN_00406e80(&local_30,9,puVar1);
  puStack_24 = (undefined1 *)0x71d135;
  thunk_FUN_00406e5c(&local_8);
  return;
}
