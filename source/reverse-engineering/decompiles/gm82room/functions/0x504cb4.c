// rea decompile_all
// name: FUN_00504cb4
// address: 0x504cb4
// body: available
// range: 0x504cb4-0x504cb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00504cb4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,byte param_5
                 )

{
  undefined1 *puVar1;
  char cVar2;
  IMalloc **ppMalloc;
  HRESULT HVar3;
  IShellFolder **ppshf;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_a8;
  undefined4 uStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  undefined1 *puStack_90;
  LPCITEMIDLIST *ppIStack_8c;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  int *piStack_78;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  _browseinfoW _Stack_58;
  LPITEMIDLIST pIStack_38;
  LPCITEMIDLIST pIStack_34;
  LPWSTR pWStack_30;
  undefined4 uStack_2c;
  LPARAM LStack_28;
  undefined1 auStack_20 [4];
  UINT UStack_1c;
  undefined1 uStack_15;
  undefined4 *puStack_14;
  int *piStack_c;
  int *piStack_8;

  puStack_68 = &stack0xfffffffc;
  piStack_8 = (int *)0x0;
  piStack_c = (int *)0x0;
  puStack_6c = &LAB_00504f59;
  uStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_70;
  uStack_15 = 0;
  puStack_14 = param_3;
  cVar2 = FUN_00504f70(*param_3);
  if (cVar2 == '\0') {
    FUN_00408194(puStack_14,0);
  }
  FUN_00404f38(&_Stack_58,0x20,0);
  ppMalloc = (IMalloc **)FUN_0040b268(&piStack_8);
  piStack_78 = (int *)0x504d16;
  HVar3 = SHGetMalloc(ppMalloc);
  puVar1 = puStack_68;
  if ((HVar3 != 0) || (piStack_8 == (int *)0x0)) {
    *in_FS_OFFSET = uStack_70;
    puStack_68 = &LAB_00504f60;
    puStack_6c = (undefined1 *)0x504f50;
    FUN_0040b268(&piStack_c,uStack_70,puVar1);
    puStack_6c = (undefined1 *)0x504f58;
    FUN_0040b268(&piStack_8);
    return;
  }
  piStack_78 = piStack_8;
  puStack_7c = (undefined1 *)0x504d36;
  pWStack_30 = (LPWSTR)(**(code **)(*piStack_8 + 0xc))();
  puStack_80 = &LAB_00504f34;
  uStack_84 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_84;
  pIStack_34 = (LPCITEMIDLIST)0x0;
  bVar4 = true;
  puStack_7c = &stack0xfffffffc;
  thunk_FUN_00408008(param_2);
  if (!bVar4) {
    ppshf = (IShellFolder **)FUN_0040b268(&piStack_c);
    ppIStack_8c = (LPCITEMIDLIST *)0x504d65;
    SHGetDesktopFolder(ppshf);
    ppIStack_8c = &pIStack_34;
    puStack_90 = auStack_20;
    puStack_94 = (undefined1 *)0x504d78;
    puStack_94 = (undefined1 *)FUN_00407fb8(param_2);
    puStack_98 = (undefined1 *)0x0;
    uStack_9c = *(undefined4 *)(*(int *)PTR_DAT_0068917c + 0x170);
    (**(code **)(*piStack_c + 0xc))();
  }
  if (param_4 != 0) {
    cVar2 = FUN_004c4988(param_4);
    if (cVar2 != '\0') {
      _Stack_58.hwndOwner = (HWND)FUN_004c45dc(param_4);
      goto LAB_00504dbd;
    }
  }
  _Stack_58.hwndOwner = *(HWND *)(*(int *)PTR_DAT_0068917c + 0x170);
LAB_00504dbd:
  _Stack_58.pidlRoot = pIStack_34;
  _Stack_58.pszDisplayName = pWStack_30;
  _Stack_58.lpszTitle = (LPCWSTR)FUN_00408220(param_1);
  _Stack_58.lpfn = (BFFCALLBACK)0x504c98;
  _Stack_58.ulFlags = 1;
  if ((param_5 & 8) != 0) {
    _Stack_58.ulFlags = 0x41;
  }
  if ((param_5 & 1) == 0) {
    _Stack_58.ulFlags = _Stack_58.ulFlags | 0x200;
  }
  if ((param_5 & 2) != 0) {
    _Stack_58.ulFlags = _Stack_58.ulFlags | 0x10;
  }
  if ((param_5 & 4) != 0) {
    _Stack_58.ulFlags = _Stack_58.ulFlags | 0x8000;
  }
  if ((param_5 & 0x10) != 0) {
    _Stack_58.ulFlags = _Stack_58.ulFlags | 0x4000;
  }
  if ((param_5 & 0x20) != 0) {
    _Stack_58.ulFlags = _Stack_58.ulFlags | 0x20;
  }
  _Stack_58.lParam = FUN_00504f80(&DAT_00504bd8,1,*puStack_14);
  ppIStack_8c = (LPCITEMIDLIST *)&LAB_00504edf;
  puStack_90 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_90;
  puStack_98 = &LAB_00504ec2;
  uStack_9c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_9c;
  puStack_94 = &stack0xfffffffc;
  LStack_28 = _Stack_58.lParam;
  uStack_2c = FUN_004df468(0);
  UStack_1c = SetErrorMode(1);
  uStack_a8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_a8;
  pIStack_38 = SHBrowseForFolderW(&_Stack_58);
  *in_FS_OFFSET = uStack_a8;
  uStack_a8 = 0x504ea0;
  SetErrorMode(UStack_1c);
  FUN_004df52c(uStack_2c);
  return;
}
