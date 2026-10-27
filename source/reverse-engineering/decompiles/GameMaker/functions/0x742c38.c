// rea decompile_all
// name: FUN_00742c38
// address: 0x742c38
// body: available
// range: 0x742c38-0x742d80 inclusive
// range: 0x742d88-0x742dcf inclusive
// range: 0x742dd7-0x742df7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x742c4d (push 0x742df8 followed by fs-segment stack chaining); handler 0x742df8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x742cc8 (push 0x742d81 followed by fs-segment stack chaining); handler 0x742d81 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x742da9 (push 0x742dd0 followed by fs-segment stack chaining); handler 0x742dd0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00742c38(void)

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
  puStack_20 = &LAB_00742df8;
  DStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (DWORD)&DStack_24;
  puVar1 = &stack0xfffffffc;
  if (DAT_00781354 == '\0') {
    puVar1 = &stack0xfffffffc;
    if (DAT_00826450 == 0) {
      puStack_28 = (undefined1 *)0x0;
      puStack_2c = (undefined1 *)0x742c70;
      DStack_30 = GetCurrentProcessId();
      puStack_2c = (undefined1 *)0x0;
      DStack_34 = 0x742c7c;
      FUN_004168b0(&local_c);
      puStack_2c = (undefined1 *)0x742c8c;
      FUN_0040839c(&local_8,L"MutexNPA_UnitVersioning_",local_c);
      puStack_2c = (undefined1 *)local_8;
      DStack_30 = 0x742c9e;
      DAT_00826450 = FUN_0074403c(&DAT_00743af8,1,0);
      puVar1 = puStack_1c;
    }
    puStack_1c = puVar1;
    if (DAT_0078134c == 0) {
      puStack_28 = (undefined1 *)0x742cbd;
      FUN_00743f5c(DAT_00826450,0xffffffff);
      puStack_2c = &LAB_00742d81;
      DStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = (DWORD)&DStack_30;
      puStack_28 = &stack0xfffffffc;
      if (DAT_00781350 == (int *)0x0) {
        DStack_34 = 0xf001f;
        puStack_28 = &stack0xfffffffc;
        GetCurrentProcessId();
        FUN_004168b0(&local_14);
        FUN_0040839c(&local_10,L"ShmNPA_UnitVersioning_",local_14);
        FUN_00738844(&DAT_00781350,local_10,4);
      }
      if (DAT_00781350 == (int *)0x0) {
        DAT_0078134c = FUN_0074289c(&PTR_LAB_00741c70,1);
        DAT_00781348 = 1;
      }
      else {
        DAT_0078134c = *DAT_00781350;
        if (DAT_0078134c == 0) {
          DAT_0078134c = FUN_0074289c(&PTR_LAB_00741c70,1);
          *DAT_00781350 = DAT_0078134c;
          DAT_00781348 = 1;
        }
      }
      puVar1 = puStack_2c;
      *in_FS_OFFSET = DStack_34;
      puStack_2c = (undefined1 *)0x742dd7;
      DStack_30 = 0x742d80;
      FUN_0074416c(DAT_00826450,DStack_34,puVar1);
      return;
    }
    puVar1 = puStack_1c;
    if (DAT_00781350 != (int *)0x0) {
      puStack_28 = (undefined1 *)0x742d9e;
      FUN_00743f5c(DAT_00826450,0xffffffff);
      DStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = (DWORD)&DStack_30;
      DAT_0078134c = *DAT_00781350;
      *in_FS_OFFSET = DStack_30;
      puStack_28 = (undefined1 *)0x742dd7;
      puStack_2c = (undefined1 *)0x742dcf;
      FUN_0074416c(DAT_00826450,DStack_30,&stack0xfffffffc);
      return;
    }
  }
  puStack_1c = puVar1;
  puVar1 = puStack_1c;
  *in_FS_OFFSET = DStack_24;
  puStack_1c = &LAB_00742dff;
  puStack_20 = (undefined1 *)0x742df7;
  thunk_FUN_00406e80(&local_14,4,puVar1);
  return;
}
