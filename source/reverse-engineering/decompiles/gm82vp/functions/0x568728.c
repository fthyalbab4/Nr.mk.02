// rea decompile_all
// name: FUN_00568728
// address: 0x568728
// body: available
// range: 0x568728-0x56896c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x568755 (push 0x56896d followed by fs-segment stack chaining); handler 0x56896d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00568728(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  wchar_t *pwStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  puStack_50 = &stack0xfffffffc;
  local_3c = 0;
  local_40 = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_8 = 0;
  puStack_54 = &LAB_0056896d;
  pwStack_58 = (wchar_t *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pwStack_58;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_c = param_2;
  do {
    local_10 = local_20;
    if (local_c < 1) {
LAB_0056894a:
      puVar2 = puStack_50;
      *in_FS_OFFSET = pwStack_58;
      puStack_50 = &LAB_00568974;
      puStack_54 = (undefined1 *)0x568964;
      thunk_FUN_004072fc(&local_40,5,puVar2);
      puStack_54 = (undefined1 *)0x56896c;
      thunk_FUN_004072d8(&local_8);
      return;
    }
    local_24 = 0;
    local_18 = FUN_00405fac(&DAT_00567ec4,1);
    iVar3 = local_c;
    if (*(int *)PTR_DAT_00689660 * 3 < local_c) {
      iVar3 = *(int *)PTR_DAT_00689660 * 3;
    }
    *(int *)(local_18 + 8) = iVar3;
    FUN_0040b268(local_18 + 0xc);
    iVar1 = iVar3 * 0x24;
    local_14 = (**(code **)(**(int **)PTR_DAT_00689570 + 0x5c))();
    if (local_14 != 0) {
      if ((char)PTR_FUN_0068645c == '\0') {
        FUN_0041636c(local_14,&local_30);
        FUN_0041636c(iVar3,&local_34);
        FUN_0041636c(iVar1,&local_38);
        pwStack_58 = L"   (error reported once only)";
        FUN_0040875c(&local_8,7);
        FUN_00561704(local_8);
        FUN_004a17e4(local_8);
        PTR_FUN_0068645c._0_1_ = '\x01';
      }
      iVar3 = local_18;
      local_28 = local_18;
      local_18 = 0;
      FUN_00405fdc(iVar3);
      local_10 = 0;
      goto LAB_0056894a;
    }
    (**(code **)(**(int **)(local_18 + 0xc) + 0x2c))();
    if (local_24 == 0) {
      if ((char)PTR_FUN_00686460 == '\0') {
        FUN_0041636c(iVar3,&local_3c);
        FUN_0041636c(iVar1,&local_40);
        pwStack_58 = L"   (error reported once only)";
        FUN_0040875c(&local_8,5);
        FUN_00561704(local_8);
        FUN_004a17e4(local_8);
        PTR_FUN_00686460._0_1_ = '\x01';
      }
      FUN_0040b268(local_18 + 0xc);
      iVar3 = local_18;
      local_2c = local_18;
      local_18 = 0;
      FUN_00405fdc(iVar3);
      local_10 = 0;
      goto LAB_0056894a;
    }
    FUN_00404514(param_1,local_24,iVar1);
    (**(code **)(**(int **)(local_18 + 0xc) + 0x30))();
    if (local_20 == 0) {
      local_20 = local_18;
    }
    else {
      *(int *)(local_1c + 4) = local_18;
    }
    param_1 = iVar1 + param_1;
    local_c = local_c - iVar3;
    local_1c = local_18;
  } while( true );
}
