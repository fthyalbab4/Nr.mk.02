// rea decompile_all
// name: FUN_006ae700
// address: 0x6ae700
// body: available
// range: 0x6ae700-0x6ae86c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ae71d (push 0x6ae86d followed by fs-segment stack chaining); handler 0x6ae86d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ae700(void)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 ***local_2c;
  undefined1 **local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_c;
  undefined4 local_8;

  local_1c = &stack0xfffffffc;
  iVar4 = 5;
  do {
    local_8 = 0;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_20 = &LAB_006ae86d;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (undefined1 **)0x6ae72c;
  DAT_00790014 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  local_28 = (undefined1 **)0x6ae73d;
  DAT_00790018 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  local_28 = (undefined1 **)0x6ae751;
  FUN_00520290(*(undefined4 *)PTR_DAT_00782280,&stack0xffffffec);
  local_28 = (undefined1 **)0x6ae75c;
  FUN_0041735c(unaff_ESI,&stack0xfffffff0);
  local_28 = (undefined1 **)0x6ae76c;
  FUN_0040839c(&local_8,unaff_EBX,L"snippets.txt");
  local_28 = (undefined1 **)0x6ae774;
  cVar2 = FUN_00416e40(local_8);
  if (cVar2 != '\0') {
    local_28 = (undefined1 **)0x6ae785;
    (**(code **)(*DAT_00790014 + 0x68))(DAT_00790014,local_8);
  }
  local_28 = (undefined1 **)0x6ae78f;
  local_c = (**(code **)(*DAT_00790014 + 0x14))();
  if (-1 < local_c + -1) {
    iVar4 = 0;
    do {
      local_28 = (undefined1 **)0x6ae7ad;
      (**(code **)(*DAT_00790014 + 0xc))(DAT_00790014,iVar4,&stack0xffffffe8);
      local_28 = (undefined1 **)0x6ae7ba;
      iVar3 = FUN_00408a68(&DAT_006ae8b0,unaff_EDI);
      if (iVar3 < 1) {
        local_28 = (undefined1 **)0x6ae7cf;
        (**(code **)(*DAT_00790014 + 0xc))(DAT_00790014,iVar4,&local_1c);
        local_28 = (undefined1 **)0x6ae7dc;
        (**(code **)(*DAT_00790018 + 0x38))(DAT_00790018,local_1c);
      }
      else {
        local_28 = &local_20;
        local_2c = (undefined1 ***)0x6ae7f1;
        (**(code **)(*DAT_00790014 + 0xc))(DAT_00790014,iVar4,&local_24);
        local_2c = (undefined1 ***)0x6ae801;
        FUN_004086a8(local_24,1,iVar3 + -1);
        local_2c = (undefined1 ***)0x6ae80e;
        (**(code **)(*DAT_00790018 + 0x38))(DAT_00790018,local_20);
        local_2c = &local_28;
        (**(code **)(*DAT_00790014 + 0xc))(DAT_00790014,iVar4,&local_2c);
        FUN_004086a8(local_2c,iVar3 + 1,100000);
        (**(code **)(*DAT_00790014 + 0x20))(DAT_00790014,iVar4,local_28);
      }
      iVar4 = iVar4 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  puVar1 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_006ae874;
  local_20 = (undefined1 *)0x6ae864;
  thunk_FUN_00406e80(&local_2c,8,puVar1);
  local_20 = (undefined1 *)0x6ae86c;
  thunk_FUN_00406e5c(&local_8);
  return;
}
