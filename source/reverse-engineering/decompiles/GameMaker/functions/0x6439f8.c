// rea decompile_all
// name: FUN_006439f8
// address: 0x6439f8
// body: available
// range: 0x6439f8-0x643bef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x643a25 (push 0x643bf0 followed by fs-segment stack chaining); handler 0x643bf0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006439f8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                 byte param_5,byte param_6,char param_7)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  puStack_1c = (undefined1 *)0x643a15;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_20 = &LAB_00643bf0;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if ((*PTR_DAT_00781e84 == '\0') && (puStack_1c = &stack0xfffffffc, *(int *)PTR_DAT_00782828 != 0))
  {
    puStack_1c = &stack0xfffffffc;
    cVar2 = FUN_00416e40(*(undefined4 *)PTR_DAT_00782828);
    if (cVar2 != '\0') {
      FUN_00643858(param_1,param_3);
      goto LAB_00643bd5;
    }
  }
  FUN_0040839c(&local_c,L"Image Editor: ",local_8);
  FUN_004ee6d8(DAT_0078a10c,local_c);
  FUN_00407eb8(DAT_0078a10c + 0x1c0,local_8);
  iVar3 = FUN_00701cf4(&DAT_00700d94,1,*param_1);
  DAT_0078a10c[0x1c1] = iVar3;
  DAT_0078a10c[0x1c2] = 0;
  *(char *)(DAT_0078a10c + 0x1c3) = (char)param_3;
  *(undefined1 *)((int)DAT_0078a10c + 0x70d) = 0;
  *(undefined1 *)((int)DAT_0078a10c + 0x70e) = 0;
  if (param_7 != '\0') {
    DAT_0078a10c[0x1c4] = 100;
  }
  FUN_006445c8(DAT_0078a10c);
  DAT_0078a10c[0x1d1] = 0;
  DAT_0078a10c[0x1d2] = 0;
  FUN_0050b1fc(DAT_0078a10c[0x17e],param_3);
  FUN_0050b1fc(DAT_0078a10c[0x149],param_3);
  FUN_0050b1fc(DAT_0078a10c[0x14a],param_3);
  FUN_0050b1fc(DAT_0078a10c[0x14b],param_3);
  FUN_0050aef0(DAT_0078a10c[0x16d],param_6);
  FUN_0050aef0(DAT_0078a10c[0x16c],param_5);
  FUN_0050b1fc(DAT_0078a10c[0x16d],param_6 | param_5);
  FUN_0050b1fc(DAT_0078a10c[0x16c],param_6 | param_5);
  FUN_00644aa0(DAT_0078a10c);
  FUN_00644e28(DAT_0078a10c);
  FUN_00645298(DAT_0078a10c);
  DAT_0078a10c[0x1bf] = 0;
  (**(code **)(*DAT_0078a10c + 0x110))();
  FUN_006445c8(DAT_0078a10c);
  *param_4 = DAT_0078a10c[0x1bf];
  if (*(char *)((int)DAT_0078a10c + 0x70e) != '\0') {
    FUN_007022dc(*param_1,DAT_0078a10c[0x1c1]);
  }
  FUN_00405a7c(DAT_0078a10c[0x1c1]);
LAB_00643bd5:
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00643bf7;
  puStack_20 = (undefined1 *)0x643bef;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
