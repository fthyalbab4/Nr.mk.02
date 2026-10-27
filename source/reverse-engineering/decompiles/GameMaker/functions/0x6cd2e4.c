// rea decompile_all
// name: FUN_006cd2e4
// address: 0x6cd2e4
// body: available
// range: 0x6cd2e4-0x6cd3ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6cd30f (push 0x6cd3cf followed by fs-segment stack chaining); handler 0x6cd3cf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cd2e4(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int extraout_EDX;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;

  local_c = 0;
  puStack_1c = (undefined1 *)0x6cd304;
  local_8 = param_3;
  thunk_FUN_00407660(param_3);
  puStack_20 = &LAB_006cd3cf;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00409d1c(&local_c,param_1[1],&DAT_006cd2b8);
  uVar2 = (**(code **)*param_1)();
  uVar3 = param_4 * 2 + param_2;
  iVar6 = (int)uVar3 >> 0x1f;
  if (iVar6 == extraout_EDX) {
    if (uVar2 <= uVar3) goto LAB_006cd3ab;
  }
  else if (extraout_EDX <= iVar6) goto LAB_006cd3ab;
  if (-1 < param_4 + -1) {
    iVar6 = 0;
    do {
      iVar4 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        iVar4 = FUN_00407048(&local_8,local_8);
      }
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar5 = *(int *)(iVar4 + -4);
      }
      if (iVar6 < iVar5) {
        *(char *)(local_c + iVar6 * 2 + param_2) = (char)*(undefined2 *)(local_8 + iVar6 * 2);
      }
      else {
        *(undefined1 *)(local_c + iVar6 * 2 + param_2) = 0;
      }
      *(undefined1 *)(local_c + 1 + iVar6 * 2 + param_2) = 0;
      iVar6 = iVar6 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
LAB_006cd3ab:
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_006cd3d6;
  puStack_20 = (undefined1 *)0x6cd3c6;
  FUN_00409ce0(&local_c,&DAT_006cd2b8,puVar1);
  puStack_20 = (undefined1 *)0x6cd3ce;
  thunk_FUN_00406e5c(&local_8);
  return;
}
