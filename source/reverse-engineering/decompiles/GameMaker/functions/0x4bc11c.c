// rea decompile_all
// name: FUN_004bc11c
// address: 0x4bc11c
// body: available
// range: 0x4bc11c-0x4bc23f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4bc143 (push 0x4bc240 followed by fs-segment stack chaining); handler 0x4bc240 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bc11c(int *param_1,uint *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  uint local_48 [5];
  int local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  byte local_9;
  undefined4 local_8;

  puStack_58 = &stack0xfffffffc;
  local_8 = 0;
  puVar3 = local_48;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  puStack_5c = &LAB_004bc240;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  puVar1 = &stack0xfffffffc;
  if ((local_48[0] & 4) == 0) {
    if ((char)param_1[0xad] == '\0') {
      FUN_004b9534(param_1[0xa7],local_48[1]);
      puVar1 = puStack_58;
    }
    else {
      puVar1 = &stack0xfffffffc;
      if ((-1 < (int)local_48[1]) && (puVar1 = &stack0xfffffffc, local_48[2] == 0)) {
        puStack_58 = &stack0xfffffffc;
        local_9 = FUN_004bc0d0(local_48[0]);
        iVar2 = param_1[0xbf];
        *(uint *)(iVar2 + 0x14) = local_48[1];
        *(undefined4 *)(iVar2 + 0x28) = local_28;
        (**(code **)(**(int **)(iVar2 + 8) + 0x44))();
        if (((local_9 & 1) == 0) || (local_34 == 0)) {
          FUN_00407f0c(&local_8,0);
        }
        else {
          FUN_00417b54(local_34,&local_8);
        }
        FUN_00407eb8(param_1[0xbf] + 0x20,local_8);
        if ((local_9 & 2) != 0) {
          *(undefined4 *)(param_1[0xbf] + 0xc) = local_2c;
        }
        if ((local_9 & 0x10) != 0) {
          *(undefined4 *)(param_1[0xbf] + 0x10) = local_24;
        }
        (**(code **)(*param_1 + 0x138))(param_1,param_1[0xbf],local_9);
        puVar1 = puStack_58;
      }
    }
  }
  puStack_58 = puVar1;
  puVar1 = puStack_58;
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_004bc247;
  puStack_5c = (undefined1 *)0x4bc23f;
  thunk_FUN_00406e5c(&local_8,uStack_60,puVar1);
  return;
}
