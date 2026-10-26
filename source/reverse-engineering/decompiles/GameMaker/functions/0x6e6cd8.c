// rea decompile_all
// name: FUN_006e6cd8
// address: 0x6e6cd8
// body: available
// range: 0x6e6cd8-0x6e6e23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_006e6cd8(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  byte bVar6;
  int aiStackY_180c [1516];
  undefined1 *puVar7;
  undefined4 uVar8;
  int local_44;
  int local_30;
  int local_2c [3];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;

  bVar6 = 0;
  uVar8 = 0;
  puVar7 = (undefined1 *)&local_30;
  local_44 = param_2;
  iVar1 = FUN_006e6624(param_1,param_2,param_3,puVar7,0);
  iVar1 = iVar1 + -1;
  iVar2 = FUN_006e660c(param_1);
  FUN_00438c38(iVar2 + -1,iVar1,0,puVar7,uVar8);
  iVar1 = *(int *)(param_1 + 4);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      FUN_007039e0(*(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 4),0,&local_20);
      if (local_20 <= local_30) {
        local_30 = local_20;
      }
      if (local_2c[1] <= local_18) {
        local_2c[1] = local_18;
      }
      if (local_1c <= local_2c[0]) {
        local_2c[0] = local_1c;
      }
      if (local_2c[2] <= local_14) {
        local_2c[2] = local_14;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (local_2c[1] - local_30) + 1 + local_44 * 2;
  iVar2 = (local_2c[2] - local_2c[0]) + 1 + local_44 * 2;
  if ((0 < iVar1) && (0 < iVar2)) {
    iVar4 = *(int *)(param_1 + 4);
    if (-1 < iVar4 + -1) {
      iVar3 = 0;
      do {
        uVar8 = FUN_00701c94(&DAT_00700d94,1,iVar1,*(undefined4 *)PTR_DAT_007819d0,iVar2);
        FUN_00702e40(uVar8,local_44,local_44,0,iVar2,iVar1,local_2c[0],local_30,
                     *(undefined4 *)(*(int *)(param_1 + 8) + iVar3 * 4));
        FUN_00405a7c(*(undefined4 *)(*(int *)(param_1 + 8) + iVar3 * 4));
        *(undefined4 *)(*(int *)(param_1 + 8) + iVar3 * 4) = uVar8;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    piVar5 = param_3 + (uint)bVar6 * -2 + 1;
    *param_3 = local_30;
    *piVar5 = *(int *)((int)local_2c + (uint)bVar6 * 0xfffffff8);
    piVar5[(uint)bVar6 * -2 + 1] = local_2c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1]
    ;
    (piVar5 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (local_2c + (uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1)[(uint)bVar6 * -2 + 1];
  }
  return;
}
