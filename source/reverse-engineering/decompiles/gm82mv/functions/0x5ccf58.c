// rea decompile_all
// name: FUN_005ccf58
// address: 0x5ccf58
// body: available
// range: 0x5ccf58-0x5cd0e3 inclusive
// range: 0x5cd0eb-0x5cd11e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ccf8e (push 0x5cd0e4 followed by fs-segment stack chaining); handler 0x5cd0e4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_005ccf58(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_14;
  undefined4 *local_c;

  puStack_2c = &stack0xfffffffc;
  if ((char)PTR_FUN_00687c40 == '\0') {
    local_28 = 0;
    local_20 = 0;
    local_24 = 0;
    puStack_30 = &LAB_005cd0e4;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    local_1c = param_3;
    local_14 = param_2;
    local_c = param_1;
    local_20 = FUN_0040430c(0x480);
    local_24 = FUN_0040430c(0x480);
    iVar2 = 0;
    do {
      *(undefined4 *)(local_20 + iVar2 * 4) = 8;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x90);
    iVar2 = 0x90;
    do {
      *(undefined4 *)(local_20 + iVar2 * 4) = 9;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x100);
    iVar2 = 0x100;
    do {
      *(undefined4 *)(local_20 + iVar2 * 4) = 7;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x118);
    iVar2 = 0x118;
    do {
      *(undefined4 *)(local_20 + iVar2 * 4) = 8;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x120);
    DAT_0085068c = 9;
    FUN_005cc898(local_20,0x11f,0x120,0x1ffffffe,local_24,&local_28,0x21f,&DAT_0084f58c,
                 &DAT_0085068c,&DAT_00850694,0x1e,&DAT_00687ad4,0x1e,&DAT_00687a58,0x101);
    iVar2 = 0;
    do {
      *(undefined4 *)(local_20 + iVar2 * 4) = 5;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x1e);
    DAT_00850690 = 5;
    FUN_005cc898(local_20,0x11f,0x1e,0x1ffffffe,local_24,&local_28,0x21f,&DAT_0084f58c,&DAT_00850690
                 ,&DAT_00850698,0x1d,&DAT_00687bc8,0x1d,&DAT_00687b50,0);
    puVar1 = puStack_2c;
    PTR_FUN_00687c40._0_1_ = 1;
    uVar3 = 0;
    *in_FS_OFFSET = uStack_34;
    puStack_2c = (undefined1 *)0x5cd0eb;
    if (local_24 != 0) {
      puStack_30 = (undefined1 *)0x5cd0d5;
      uVar3 = FUN_00404340(local_24,uStack_34,puVar1);
    }
    if (local_20 != 0) {
      puStack_30 = (undefined1 *)0x5cd0e3;
      uVar3 = FUN_00404340(local_20);
    }
    return uVar3;
  }
  *param_1 = DAT_0085068c;
  *param_2 = DAT_00850690;
  *param_3 = DAT_00850694;
  *param_5 = DAT_00850698;
  return 0;
}
