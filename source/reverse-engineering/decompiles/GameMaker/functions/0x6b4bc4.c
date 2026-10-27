// rea decompile_all
// name: FUN_006b4bc4
// address: 0x6b4bc4
// body: available
// range: 0x6b4bc4-0x6b4e65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b4bf1 (push 0x6b4e66 followed by fs-segment stack chaining); handler 0x6b4e66 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b4bc4(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *in_FS_OFFSET;
  int iStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined1 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined2 *local_8;

  puStack_40 = &stack0xfffffffc;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_8 = (undefined2 *)0x0;
  puStack_44 = &LAB_006b4e66;
  iStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_48;
  local_10 = param_3;
  local_c = param_2;
  FUN_00488540();
  iVar2 = FUN_00487c20();
  FUN_0045b498(*(undefined4 *)(iVar2 + 0x40),0);
  FUN_00488540();
  uVar3 = FUN_00487c20();
  local_18 = FUN_0045bea4(uVar3,&DAT_006b4e88);
  iVar2 = FUN_00404878();
  FUN_00488540();
  uVar3 = FUN_00487c20();
  local_14 = FUN_0045bec4(uVar3,&DAT_006b4e88);
  if (*PTR_DAT_007823a4 != '\0') {
    FUN_00488540();
    iVar4 = FUN_00487c20();
    FUN_0045b850(*(undefined4 *)(iVar4 + 0x44),0xaa6666);
    FUN_00488540();
    iVar4 = FUN_00487c20();
    uVar3 = *(undefined4 *)(iVar4 + 0x44);
    uVar5 = FUN_00404878();
    FUN_0045b9a4(uVar3,uVar5);
    FUN_00488540();
    piVar6 = (int *)FUN_00487c20();
    iVar4 = FUN_00404878();
    (**(code **)(*piVar6 + 0x5c))(piVar6,iVar4 + local_c,local_10);
    FUN_00488540();
    piVar6 = (int *)FUN_00487c20();
    iVar4 = FUN_00404878();
    (**(code **)(*piVar6 + 0x58))(piVar6,iVar4 + local_c,local_10 + iVar2);
    FUN_00488540();
    iVar2 = FUN_00487c20();
    FUN_0045b0d0(*(undefined4 *)(iVar2 + 0x40),0xcc9999);
    FUN_00488540();
    iVar2 = FUN_00487c20();
    FUN_0045b498(*(undefined4 *)(iVar2 + 0x40),0);
    local_20 = param_4 + 1;
    local_1c = 0;
    FUN_00417d4c(&DAT_006b4eb4,&local_20,0,&local_8);
    FUN_00408034(&local_24,*local_8);
    uVar3 = local_24;
    FUN_00488540();
    piVar6 = (int *)FUN_00487c20();
    (**(code **)(*piVar6 + 0x88))(piVar6,local_c,local_10,uVar3);
    FUN_00408034(&local_28,local_8[1]);
    uVar3 = local_28;
    FUN_00488540();
    piVar6 = (int *)FUN_00487c20();
    (**(code **)(*piVar6 + 0x88))(piVar6,local_c + local_14,local_10,uVar3);
    FUN_00408034(&local_2c,local_8[2]);
    uVar3 = local_2c;
    FUN_00488540();
    piVar6 = (int *)FUN_00487c20();
    (**(code **)(*piVar6 + 0x88))(piVar6,local_14 * 2 + local_c,local_10,uVar3);
    FUN_00408034(&local_30,local_8[3]);
    uVar3 = local_30;
    FUN_00488540();
    piVar6 = (int *)FUN_00487c20();
    (**(code **)(*piVar6 + 0x88))(piVar6,local_14 * 3 + local_c,local_10,uVar3);
    local_c = local_c + local_14 * 5;
  }
  uVar3 = 0x6b4e0c;
  iVar2 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + param_4 * 0x10));
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      iStack_48 = *(int *)(*(int *)(param_1 + 0x2d8) + 4 + param_4 * 0x10) + iVar4 * 0xc;
      FUN_006b4ebc(param_1,iVar4 * local_14 + local_c,local_10,uVar3);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_40;
  *in_FS_OFFSET = iStack_48;
  puStack_40 = &LAB_006b4e6d;
  puStack_44 = (undefined1 *)0x6b4e5d;
  thunk_FUN_00406e80(&local_30,4,puVar1);
  puStack_44 = (undefined1 *)0x6b4e65;
  thunk_FUN_00406e5c(&local_8);
  return;
}
