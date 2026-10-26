// rea decompile_all
// name: FUN_006cd180
// address: 0x6cd180
// body: available
// range: 0x6cd180-0x6cd2a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6cd1ab (push 0x6cd2a1 followed by fs-segment stack chaining); handler 0x6cd2a1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cd180(undefined4 *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_b0;
  undefined1 *puStack_ac;
  undefined1 *puStack_a8;
  char local_98 [128];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_c = 0;
  puStack_a8 = (undefined1 *)0x6cd1a0;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  puStack_ac = &LAB_006cd2a1;
  uStack_b0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_b0;
  local_10 = -1;
  iVar2 = local_8;
  puStack_a8 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_a8 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_a8 = &stack0xfffffffc;
    iVar2 = FUN_00407048(&local_8,local_8);
  }
  local_14 = 0;
  if (iVar2 != 0) {
    local_14 = *(int *)(iVar2 + -4);
  }
  local_14 = local_14 * 2;
  if (0x80 < local_14) {
    local_14 = 0x80;
  }
  if (-1 < local_14 >> 1) {
    local_18 = (local_14 >> 1) + 1;
    iVar2 = 0;
    do {
      local_98[iVar2 * 2] = (char)*(undefined2 *)(local_8 + iVar2 * 2);
      local_98[iVar2 * 2 + 1] = '\0';
      iVar2 = iVar2 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  FUN_00409d1c(&local_c,param_1[1],&DAT_006cd154);
  iVar3 = (**(code **)*param_1)();
  puVar1 = puStack_a8;
  iVar2 = local_10;
  if (param_3 <= iVar3 + -0x20) {
    local_18 = ((iVar3 + -0x20) - param_3) + 1;
    do {
      if (-1 < local_14 + -1) {
        iVar5 = 0;
        pcVar4 = local_98;
        iVar3 = local_14;
        do {
          if (*(char *)(local_c + iVar5 + param_3) != *pcVar4) break;
          iVar2 = param_3;
          if (iVar5 == local_14 + -1) goto LAB_006cd27d;
          iVar5 = iVar5 + 1;
          pcVar4 = pcVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      param_3 = param_3 + 1;
      local_18 = local_18 + -1;
      iVar2 = local_10;
    } while (local_18 != 0);
  }
LAB_006cd27d:
  local_10 = iVar2;
  *in_FS_OFFSET = uStack_b0;
  puStack_a8 = &LAB_006cd2a8;
  puStack_ac = (undefined1 *)0x6cd298;
  FUN_00409ce0(&local_c,&DAT_006cd154,puVar1);
  puStack_ac = (undefined1 *)0x6cd2a0;
  thunk_FUN_00406e5c(&local_8);
  return;
}
