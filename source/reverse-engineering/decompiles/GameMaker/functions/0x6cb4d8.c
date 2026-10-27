// rea decompile_all
// name: FUN_006cb4d8
// address: 0x6cb4d8
// body: available
// range: 0x6cb4d8-0x6cb69e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6cb4f6 (push 0x6cb69f followed by fs-segment stack chaining); handler 0x6cb69f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cb4d8(int *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_006cb69f;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  piVar2 = (int *)FUN_006ca800(&DAT_006ca360,1);
  FUN_006ca890(piVar2,*param_1);
  DAT_0079009c[0xf4] = *param_1;
  FUN_0041666c(*(undefined4 *)(*param_1 + 0x10),&local_c);
  FUN_0040839c(&local_8,L"Size: ",local_c);
  FUN_004ee6d8(DAT_0079009c[0xea],local_8);
  FUN_004ee6d8(DAT_0079009c[0xe4],*(undefined4 *)(*param_1 + 4));
  FUN_0040839c(&local_10,L"Original File: ",*(undefined4 *)(*param_1 + 8));
  FUN_004ee6d8(DAT_0079009c[0xeb],local_10);
  (**(code **)(*(int *)DAT_0079009c[0xec] + 0xf0))
            ((int *)DAT_0079009c[0xec],*(undefined1 *)(*param_1 + 0x14));
  (**(code **)(*(int *)DAT_0079009c[0xee] + 0xf0))
            ((int *)DAT_0079009c[0xee],*(int *)(*param_1 + 0x1c) == 0);
  (**(code **)(*(int *)DAT_0079009c[0xef] + 0xf0))
            ((int *)DAT_0079009c[0xef],*(int *)(*param_1 + 0x1c) == 1);
  (**(code **)(*(int *)DAT_0079009c[0xf0] + 0xf0))
            ((int *)DAT_0079009c[0xf0],*(int *)(*param_1 + 0x1c) == 2);
  (**(code **)(*(int *)DAT_0079009c[0xf1] + 0xf0))
            ((int *)DAT_0079009c[0xf1],*(int *)(*param_1 + 0x1c) == 3);
  FUN_004ee6d8(DAT_0079009c[0xf2],*(undefined4 *)(*param_1 + 0x20));
  FUN_004ee5c0(DAT_0079009c[0xf2],*(int *)(*param_1 + 0x1c) == 3);
  (**(code **)(*(int *)DAT_0079009c[0xe3] + 0xf0))
            ((int *)DAT_0079009c[0xe3],*(undefined1 *)(*param_1 + 0x26));
  (**(code **)(*(int *)DAT_0079009c[0xe7] + 0xf0))
            ((int *)DAT_0079009c[0xe7],*(undefined1 *)(*param_1 + 0x25));
  (**(code **)(*(int *)DAT_0079009c[0xe6] + 0xf0))
            ((int *)DAT_0079009c[0xe6],*(undefined1 *)(*param_1 + 0x24));
  iVar3 = (**(code **)(*DAT_0079009c + 0x110))();
  if (iVar3 != 1) {
    FUN_006ca890(*param_1,piVar2);
  }
  (**(code **)(*piVar2 + -4))(piVar2,1);
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006cb6a6;
  puStack_24 = (undefined1 *)0x6cb69e;
  thunk_FUN_00406e80(&local_10,3,puVar1);
  return;
}
