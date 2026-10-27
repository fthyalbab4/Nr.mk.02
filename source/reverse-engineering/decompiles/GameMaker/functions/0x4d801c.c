// rea decompile_all
// name: FUN_004d801c
// address: 0x4d801c
// body: available
// range: 0x4d801c-0x4d81fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d8035 (push 0x4d81fb followed by fs-segment stack chaining); handler 0x4d81fb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d801c(uint param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_004d81fb;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar2 = param_1 & 0xff;
  if (uVar2 < 0x2d) {
    if (uVar2 - 8 < 2) {
      puStack_1c = &stack0xfffffffc;
      FUN_00407f0c(&local_8,*(undefined4 *)(&DAT_00778950 + (param_1 & 0xff) * 4));
      goto LAB_004d8180;
    }
    if (uVar2 == 0xd) {
      puStack_1c = &stack0xfffffffc;
      FUN_00407f0c(&local_8,DAT_0077897c);
      goto LAB_004d8180;
    }
    if (uVar2 == 0x1b) {
      puStack_1c = &stack0xfffffffc;
      FUN_00407f0c(&local_8,DAT_00778978);
      goto LAB_004d8180;
    }
    if (uVar2 - 0x20 < 9) {
      puStack_1c = &stack0xfffffffc;
      FUN_00407f0c(&local_8,*(undefined4 *)(&DAT_007788f0 + (uint)(byte)((char)param_1 + 4) * 4));
      goto LAB_004d8180;
    }
  }
  else if (uVar2 < 0x41) {
    if (uVar2 - 0x2d < 2) {
      puStack_1c = &stack0xfffffffc;
      FUN_00407f0c(&local_8,(&PTR_DAT_007788bc)[(byte)((char)param_1 + 0xd)]);
      goto LAB_004d8180;
    }
    if (uVar2 - 0x30 < 10) {
      puStack_1c = &stack0xfffffffc;
      FUN_00408034(&local_8,param_1 & 0xff);
      goto LAB_004d8180;
    }
  }
  else {
    if (uVar2 - 0x41 < 0x1a) {
      FUN_00408034(&local_8,param_1 & 0xff);
      goto LAB_004d8180;
    }
    if (uVar2 - 0x60 < 10) {
      puStack_1c = &stack0xfffffffc;
      FUN_00408034(&local_8,(param_1 & 0xff) - 0x30);
      goto LAB_004d8180;
    }
    if (uVar2 - 0x70 < 0x18) {
      puStack_1c = &stack0xfffffffc;
      FUN_0041666c((param_1 & 0xff) - 0x6f,&local_c);
      FUN_0040839c(&local_8,&DAT_004d8218,local_c);
      goto LAB_004d8180;
    }
  }
  puStack_1c = &stack0xfffffffc;
  FUN_004d7fcc(param_1,&local_8);
LAB_004d8180:
  if (local_8 == 0) {
    FUN_00407eb8(param_2,0);
  }
  else {
    FUN_00407eb8(param_2,0);
    if ((param_1 & 0x2000) != 0) {
      FUN_004082dc(param_2,DAT_007789ac);
    }
    if ((param_1 & 0x4000) != 0) {
      FUN_004082dc(param_2,DAT_007789b0);
    }
    if ((param_1 & 0x8000) != 0) {
      FUN_004082dc(param_2,DAT_007789b4);
    }
    FUN_004082dc(param_2,local_8);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004d8202;
  puStack_20 = (undefined1 *)0x4d81fa;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
