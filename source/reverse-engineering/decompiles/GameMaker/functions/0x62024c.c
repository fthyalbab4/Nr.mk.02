// rea decompile_all
// name: FUN_0062024c
// address: 0x62024c
// body: available
// range: 0x62024c-0x620426 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x620299 (push 0x620427 followed by fs-segment stack chaining); handler 0x620427 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062024c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_e8;
  undefined1 *puStack_e4;
  undefined1 *puStack_e0;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b5 [161];
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_e0 = &stack0xfffffffc;
  local_cc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_c0 = 0;
  local_8 = 0;
  local_c = 0;
  puStack_e4 = &LAB_00620427;
  uStack_e8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_e8;
  local_10 = param_1;
  if (param_4 == 0) {
    FUN_00407f0c(&local_8,0);
  }
  else {
    puStack_e0 = &stack0xfffffffc;
    FUN_0040839c(&local_8,param_4,&DAT_00620444);
  }
  iVar2 = (*DAT_0077ef10)();
  if (iVar2 == 1) {
    FUN_0040839c(&local_c8,local_8,param_4);
    FUN_00620120(&PTR_LAB_006200ac,local_c8);
  }
  else if (iVar2 == 5) {
    local_14 = (*DAT_0077f028)();
    if (local_14 == 0) {
      if (param_3 == 0) {
        FUN_0040b75c(PTR_PTR_007818dc,&local_c0);
        FUN_0040839c(&local_bc,local_8,local_c0);
        iVar2 = (**(code **)(local_10 + 8))(local_10,1,local_bc);
        *(undefined4 *)(iVar2 + 0x18) = 5;
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        FUN_00406618(iVar2);
      }
      if (param_3 == -1) {
        FUN_005f44b4(*(undefined4 *)PTR_DAT_007826d0);
      }
    }
    else {
      FUN_0040839c(&local_c4,local_8,param_4);
      FUN_0062013c(&PTR_LAB_006200ac,local_14,local_c4);
    }
  }
  else {
    if (iVar2 < 0) {
      thunk_FUN_00404478();
    }
    (*DAT_0077f034)();
    FUN_00417b3c(local_b5,&local_c);
    FUN_004080e4(&local_d0,local_c);
    FUN_0040839c(&local_cc,local_8,local_d0);
    iVar3 = (**(code **)(local_10 + 8))(local_10,1,local_cc);
    *(int *)(iVar3 + 0x18) = iVar2;
    *(int *)(iVar3 + 0x1c) = param_3;
    FUN_00406618(iVar3);
  }
  puVar1 = puStack_e0;
  *in_FS_OFFSET = uStack_e8;
  puStack_e0 = &LAB_0062042e;
  puStack_e4 = (undefined1 *)0x620416;
  thunk_FUN_00406e80(&local_d0,6,puVar1);
  puStack_e4 = (undefined1 *)0x62041e;
  FUN_00406e5c(&local_c);
  puStack_e4 = (undefined1 *)0x620426;
  thunk_FUN_00406e5c(&local_8);
  return;
}
