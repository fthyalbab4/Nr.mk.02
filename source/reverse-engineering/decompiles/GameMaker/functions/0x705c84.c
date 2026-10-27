// rea decompile_all
// name: FUN_00705c84
// address: 0x705c84
// body: available
// range: 0x705c84-0x705e14 inclusive
// range: 0x705e40-0x705f00 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x705cac (push 0x705f01 followed by fs-segment stack chaining); handler 0x705f01 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x705dfd (push 0x705e15 followed by fs-segment stack chaining); handler 0x705e15 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00705c84(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  LPCWSTR pWVar3;
  LPCWSTR lpExistingFileName;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  LPCWSTR local_34;
  LPCWSTR local_30;
  LPCWSTR in_stack_ffffffd4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 local_8;

  puVar6 = &stack0xfffffffc;
  iVar4 = 6;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_1c = (undefined1 *)0x705ca1;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  local_20 = &LAB_00705f01;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_1c = &stack0xfffffffc;
  FUN_006ca214(L"Saving Game Data ...");
  uVar2 = FUN_00405a4c(&LAB_0052e8fc,1);
  cVar1 = FUN_00705798(uVar2);
  if (cVar1 == '\0') {
    FUN_00405a7c(uVar2);
    FUN_006ca2cc();
    FUN_004d43f8(L"Error Saving: Internal error. The game has not been saved!");
  }
  else {
    if (*PTR_DAT_007821b0 != '\0') {
      cVar1 = FUN_00416e40(local_8);
      if (cVar1 != '\0') {
        iVar4 = *(int *)PTR_DAT_00781e60 + -1;
        if (0 < iVar4) {
          do {
            FUN_0041666c(iVar4 + 1,&local_20);
            FUN_0040839c(&local_1c,&DAT_00705fdc,local_20);
            FUN_00417288(local_8,local_1c,&local_c);
            uVar5 = 0x705d53;
            FUN_0041666c(iVar4,&stack0xffffffd8);
            FUN_0040839c(&local_24,&DAT_00705fdc,uVar5);
            FUN_00417288(local_8,local_24,&stack0xfffffff0);
            pWVar3 = (LPCWSTR)FUN_00407f44(local_c);
            DeleteFileW(pWVar3);
            in_stack_ffffffd4 = (LPCWSTR)FUN_00407f44(unaff_EBX);
            local_30 = (LPCWSTR)0x705d90;
            MoveFileW(in_stack_ffffffd4,pWVar3);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        FUN_00417288(local_8,L".gb1",&stack0xffffffd4);
        local_30 = in_stack_ffffffd4;
        pWVar3 = (LPCWSTR)FUN_00407f44(local_30);
        DeleteFileW(pWVar3);
        FUN_00417288(local_8,L".gb1",&local_34);
        local_30 = local_34;
        pWVar3 = (LPCWSTR)FUN_00407f44(local_34);
        lpExistingFileName = (LPCWSTR)FUN_00407f44(local_8);
        local_30 =
        L"\xf883ᬁ䃀쀳桕帕p､搰₉喋诼\xec45旨펠㏿嫀奙襤\xeb10\xe92bΦ￐ࢸ灠\xe800\xe5d4ￜ䖋\xe8ecﱐￏ鯨ﱄ\xe8ffࢦ￐雩"
        ;
        MoveFileW(lpExistingFileName,pWVar3);
      }
    }
    local_30 = (LPCWSTR)*in_FS_OFFSET;
    *in_FS_OFFSET = &local_30;
    local_34 = (LPCWSTR)0x705e0b;
    FUN_0043fe70(uVar2,local_8);
    *in_FS_OFFSET = local_30;
    FUN_006ca2cc(0,local_30,puVar6);
    FUN_00405a7c(uVar2);
    *PTR_DAT_007823fc = 0;
    *PTR_DAT_0078214c = 0;
    *PTR_DAT_00781e54 = 0;
    *PTR_DAT_00781c60 = 0;
    *PTR_DAT_00782774 = 0;
    *PTR_DAT_00781980 = 0;
    *PTR_DAT_007817d4 = 0;
    *PTR_DAT_0078179c = 0;
    *PTR_DAT_0078205c = 0;
    *PTR_DAT_00781b90 = 0;
    *PTR_DAT_00781894 = 0;
    *PTR_DAT_007818e8 = 0;
    *PTR_DAT_00782450 = 0;
    *PTR_DAT_00781e88 = 0;
    *PTR_DAT_00782448 = 0;
    *PTR_DAT_00782150 = 0;
  }
  puVar6 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_00705f08;
  local_20 = (undefined1 *)0x705ee6;
  thunk_FUN_00406e5c(&local_34,local_24,puVar6);
  local_20 = (undefined1 *)0x705ef3;
  thunk_FUN_00406e80(&stack0xffffffd4,5);
  local_20 = (undefined1 *)0x705f00;
  thunk_FUN_00406e80(&stack0xfffffff0,3);
  return;
}
