// rea decompile_all
// name: FUN_00696cf0
// address: 0x696cf0
// body: available
// range: 0x696cf0-0x696ddd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x696d0d (push 0x696dde followed by fs-segment stack chaining); handler 0x696dde lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00696cf0(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = (undefined1 *)0x696d02;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = &LAB_00696dde;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  iVar2 = FUN_0062cc14(local_8);
  if ((((((iVar2 < 0) && (iVar2 = FUN_006f5a0c(local_8), iVar2 < 0)) &&
        (iVar2 = FUN_006523ac(local_8), iVar2 < 0)) &&
       ((iVar2 = FUN_0064df24(local_8), iVar2 < 0 && (iVar2 = FUN_0072292c(local_8), iVar2 < 0))))
      && ((iVar2 = FUN_006fcd44(local_8), iVar2 < 0 &&
          ((iVar2 = FUN_006fa6f4(local_8), iVar2 < 0 && (iVar2 = FUN_00655c2c(local_8), iVar2 < 0)))
          ))) &&
     ((iVar2 = FUN_00693010(local_8), iVar2 < 0 && (iVar2 = FUN_006bcde0(local_8), iVar2 < 0)))) {
    if (-1 < DAT_0077f3d0 + -1) {
      iVar3 = 0;
      bVar4 = true;
      iVar2 = DAT_0077f3d0;
      do {
        FUN_00408640(*(undefined4 *)(DAT_0078c178 + iVar3 * 4),local_8);
        if (bVar4) goto LAB_00696dc8;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
        bVar4 = iVar2 == 0;
      } while (!bVar4);
    }
    FUN_007134b4(local_8);
  }
LAB_00696dc8:
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00696de5;
  puStack_1c = (undefined1 *)0x696ddd;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
