// rea decompile_all
// name: FUN_005454b8
// address: 0x5454b8
// body: available
// range: 0x5454b8-0x545600 inclusive
// range: 0x545608-0x54564f inclusive
// range: 0x545657-0x545677 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5454cd (push 0x545678 followed by fs-segment stack chaining); handler 0x545678 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x545548 (push 0x545601 followed by fs-segment stack chaining); handler 0x545601 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x545629 (push 0x545650 followed by fs-segment stack chaining); handler 0x545650 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005454b8(void)

{
  undefined1 *puVar1;
  DWORD *in_FS_OFFSET;
  DWORD DStack_34;
  DWORD DStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  DWORD DStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_20 = &LAB_00545678;
  DStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (DWORD)&DStack_24;
  puVar1 = &stack0xfffffffc;
  if ((char)PTR_FUN_006861dc == '\0') {
    puVar1 = &stack0xfffffffc;
    if (DAT_00711844 == 0) {
      puStack_28 = (undefined1 *)0x0;
      puStack_2c = (undefined1 *)0x5454f0;
      DStack_30 = GetCurrentProcessId();
      puStack_2c = (undefined1 *)0x0;
      DStack_34 = 0x5454fc;
      FUN_004165b0(&local_c);
      puStack_2c = (undefined1 *)0x54550c;
      FUN_00408678(&local_8,L"MutexNPA_UnitVersioning_",local_c);
      puStack_2c = (undefined1 *)local_8;
      DStack_30 = 0x54551e;
      DAT_00711844 = FUN_005468bc(&DAT_00546378,1,0);
      puVar1 = puStack_1c;
    }
    puStack_1c = puVar1;
    if (DAT_006861d4 == 0) {
      puStack_28 = (undefined1 *)0x54553d;
      FUN_005467dc(DAT_00711844,0xffffffff);
      puStack_2c = &LAB_00545601;
      DStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = (DWORD)&DStack_30;
      puStack_28 = &stack0xfffffffc;
      if (DAT_006861d8 == (int *)0x0) {
        DStack_34 = 0xf001f;
        puStack_28 = &stack0xfffffffc;
        GetCurrentProcessId();
        FUN_004165b0(&local_14);
        FUN_00408678(&local_10,L"ShmNPA_UnitVersioning_",local_14);
        FUN_0053aca0(&DAT_006861d8,local_10,4);
      }
      if (DAT_006861d8 == (int *)0x0) {
        DAT_006861d4 = FUN_0054511c(&PTR_LAB_005444f0,1);
        PTR_FUN_006861d0._0_1_ = 1;
      }
      else {
        DAT_006861d4 = *DAT_006861d8;
        if (DAT_006861d4 == 0) {
          DAT_006861d4 = FUN_0054511c(&PTR_LAB_005444f0,1);
          *DAT_006861d8 = DAT_006861d4;
          PTR_FUN_006861d0._0_1_ = 1;
        }
      }
      puVar1 = puStack_2c;
      *in_FS_OFFSET = DStack_34;
      puStack_2c = (undefined1 *)0x545657;
      DStack_30 = 0x545600;
      FUN_005469ec(DAT_00711844,DStack_34,puVar1);
      return;
    }
    puVar1 = puStack_1c;
    if (DAT_006861d8 != (int *)0x0) {
      puStack_28 = (undefined1 *)0x54561e;
      FUN_005467dc(DAT_00711844,0xffffffff);
      DStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = (DWORD)&DStack_30;
      DAT_006861d4 = *DAT_006861d8;
      *in_FS_OFFSET = DStack_30;
      puStack_28 = (undefined1 *)0x545657;
      puStack_2c = (undefined1 *)0x54564f;
      FUN_005469ec(DAT_00711844,DStack_30,&stack0xfffffffc);
      return;
    }
  }
  puStack_1c = puVar1;
  puVar1 = puStack_1c;
  *in_FS_OFFSET = DStack_24;
  puStack_1c = &LAB_0054567f;
  puStack_20 = (undefined1 *)0x545677;
  thunk_FUN_004072fc(&local_14,4,puVar1);
  return;
}
