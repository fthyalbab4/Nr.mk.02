// rea decompile_all
// name: FUN_0048173c
// address: 0x48173c
// body: available
// range: 0x48173c-0x481849 inclusive
// range: 0x481861-0x481876 inclusive
// range: 0x4818d6-0x4818df inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x481764 (push 0x4818cf followed by fs-segment stack chaining); handler 0x4818cf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4817ab (push 0x4818b2 followed by fs-segment stack chaining); handler 0x4818b2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4817c8 (push 0x481894 followed by fs-segment stack chaining); handler 0x481894 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48180e (push 0x481877 followed by fs-segment stack chaining); handler 0x481877 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x48182f (push 0x48184a followed by fs-segment stack chaining); handler 0x48184a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0048173c(int *param_1,int param_2,undefined4 param_3)

{
  HANDLE hMem;
  LPVOID pvVar1;
  undefined4 uVar2;
  SIZE_T SVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_60;
  undefined1 *puStackY_5c;
  undefined1 *puStackY_58;
  undefined4 uStackY_54;
  undefined1 *puStackY_50;
  undefined1 *puVar5;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;

  puVar5 = &stack0xfffffffc;
  puStack_28 = (undefined1 *)0x481759;
  (**(code **)(*param_1 + 0x18))();
  puStack_2c = &LAB_004818cf;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_38 = (undefined1 *)0x481774;
  puStack_28 = &stack0xfffffffc;
  hMem = GetClipboardData((uint)DAT_0068f17a);
  if (hMem == (HANDLE)0x0) {
    FUN_00406ba8();
  }
  else {
    puStack_38 = (undefined1 *)0x481790;
    pvVar1 = GlobalLock(hMem);
    if (pvVar1 != (LPVOID)0x0) {
      puStack_38 = &LAB_004818b2;
      uStack_3c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_3c;
      puStack_40 = (undefined1 *)0x4817ba;
      uVar2 = FUN_00405fac(&LAB_004319cc,1);
      puStack_44 = &LAB_00481894;
      uStack_48 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_48;
      puStackY_50 = (undefined1 *)0x4817d4;
      puStack_40 = &stack0xfffffffc;
      SVar3 = GlobalSize(hMem);
      FUN_0043cac0(uVar2,pvVar1,SVar3);
      puStackY_50 = (undefined1 *)0x0;
      uStackY_54 = 0x4817ec;
      FUN_0043c854(uVar2);
      puStackY_50 = (undefined1 *)0x481800;
      iVar4 = FUN_0043d8bc(&PTR_FUN_0043332c,1,uVar2);
      puStackY_50 = &LAB_00481877;
      uStackY_54 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStackY_54;
      *(undefined4 *)(iVar4 + 0x2c) = param_3;
      puStackY_58 = (undefined1 *)0x481821;
      uVar2 = FUN_0043ff5c(iVar4,0);
      puStackY_5c = &LAB_0048184a;
      uStackY_60 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStackY_60;
      puStackY_58 = &stack0xfffffffc;
      if (param_2 != 0) {
        puStackY_58 = &stack0xfffffffc;
        FUN_004462bc(param_2,uVar2);
      }
      *in_FS_OFFSET = uStackY_60;
      *in_FS_OFFSET = uStackY_54;
      puStackY_50 = (undefined1 *)0x481876;
      uVar2 = FUN_00405fdc(iVar4,uStackY_54,puVar5);
      return uVar2;
    }
    FUN_00406ba8();
  }
  return 0;
}
