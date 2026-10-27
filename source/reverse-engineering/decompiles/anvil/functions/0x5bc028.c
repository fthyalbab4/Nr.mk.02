// rea decompile_all
// name: FUN_005bc028
// address: 0x5bc028
// body: available
// range: 0x5bc028-0x5bc150 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5bc04a (push 0x5bc151 followed by fs-segment stack chaining); handler 0x5bc151 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bc028(void)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar5;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_3c = &stack0xfffffffc;
  local_c = 0;
  local_28 = 0;
  local_2c = 0;
  local_8 = 0;
  puStack_40 = &LAB_005bc151;
  puStack_44 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_44;
  puVar1 = &stack0xfffffffc;
  if ((DAT_00687530 != 0) && (puVar1 = &stack0xfffffffc, *(char *)(DAT_00687530 + 0x59) != '\0')) {
    FUN_004081e8(&local_8,
                 L"   Id     Object Name    Sprite Name\r\n____________________________________\r\n"
                );
    iVar3 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
    if (-1 < iVar3 + -1) {
      iVar4 = 0;
      do {
        iVar2 = FUN_00608fec(*(undefined4 *)PTR_DAT_0068939c,iVar4);
        if (*(char *)(iVar2 + 0x108) == '\0') {
          puVar5 = &local_c;
          local_24 = *(undefined4 *)(iVar2 + 4);
          local_20 = 0;
          FUN_00571ed0(*(undefined4 *)(iVar2 + 0xcc),&local_28);
          local_1c = local_28;
          local_18 = 0x11;
          FUN_005798c4(*(undefined4 *)(iVar2 + 8),&local_2c);
          local_14 = local_2c;
          local_10 = 0x11;
          FUN_00417c88(L"%6d %14s %14s",&local_24,2,puVar5);
          puStack_44 = &LAB_005bc24c;
          FUN_0040875c(&local_8,4);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_005baa58(DAT_00687530 + 0x398,local_8);
    puVar1 = puStack_3c;
  }
  puStack_3c = puVar1;
  puVar1 = puStack_3c;
  *in_FS_OFFSET = puStack_44;
  puStack_3c = &LAB_005bc158;
  puStack_40 = (undefined1 *)0x5bc143;
  thunk_FUN_004072fc(&local_2c,2,puVar1);
  puStack_40 = (undefined1 *)0x5bc150;
  thunk_FUN_004072fc(&local_c,2);
  return;
}
