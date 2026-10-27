// rea decompile_all
// name: FUN_005f01b4
// address: 0x5f01b4
// body: available
// range: 0x5f01b4-0x5f0313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f01db (push 0x5f0314 followed by fs-segment stack chaining); handler 0x5f0314 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f01b4(int *param_1,undefined4 param_2,undefined4 param_3,char param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7,int param_8)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined1 local_24 [4];
  undefined1 local_20 [20];
  undefined4 local_c;
  undefined4 local_8;

  puStack_40 = &stack0xfffffffc;
  local_30 = 0;
  local_2c = 0;
  puStack_44 = &LAB_005f0314;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_c = param_3;
  local_8 = param_2;
  FUN_00404f08(&local_28,0x1c,0);
  if (param_4 == '\0') {
    local_28 = 2;
    FUN_005ee298(param_1,param_6,local_24,0);
    local_26 = (**(code **)PTR_DAT_00781c94)();
    iVar2 = (**(code **)PTR_DAT_00781b9c)();
  }
  else if (param_4 == '\x01') {
    local_28 = 0x17;
    FUN_005ee298(param_1,param_6,local_20,1);
    local_26 = (**(code **)PTR_DAT_00781c94)();
    iVar2 = (**(code **)PTR_DAT_00781b9c)();
  }
  else {
    iVar2 = 0;
    FUN_005f3db8(param_1);
  }
  if (iVar2 == -1) {
    iVar2 = (**(code **)(*param_1 + 0x40))();
    if (iVar2 == 0x2738) {
      FUN_0040b75c(PTR_PTR_00781f00,&local_2c);
      FUN_005df5ec(&PTR_LAB_005df1f8,1,local_2c);
      FUN_00406618();
    }
    else {
      FUN_005f44b4(param_1);
    }
  }
  else if (param_8 != iVar2) {
    FUN_0040b75c(PTR_PTR_0078262c,&local_30);
    FUN_005df5ec(&PTR_LAB_005df2ac,1,local_30);
    FUN_00406618();
  }
  puVar1 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_005f031b;
  puStack_44 = (undefined1 *)0x5f0313;
  thunk_FUN_00406e80(&local_30,2,puVar1);
  return;
}
