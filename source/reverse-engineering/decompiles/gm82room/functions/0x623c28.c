// rea decompile_all
// name: FUN_00623c28
// address: 0x623c28
// body: available
// range: 0x623c28-0x623d65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00623c28(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  byte bVar6;
  undefined4 auStackY_1808 [1520];
  undefined4 local_2c;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined1 local_5;

  bVar6 = 0;
  local_1c = *param_6;
  uStack_18 = param_6[1];
  uStack_14 = param_6[2];
  uStack_10 = param_6[3];
  local_c = param_3;
  local_5 = param_2;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00623d68(param_1);
  }
  FUN_00409e08(param_1 + 0x24,&DAT_00622898);
  *(undefined1 *)(param_1 + 0x28) = local_5;
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00436ad0(0,0,0,&stack0xffffffd4,0);
    puVar3 = (undefined4 *)(param_1 + 0x18 + (uint)bVar6 * -8);
    *(undefined4 *)(param_1 + 0x14) = local_2c;
    puVar4 = puVar3 + (uint)bVar6 * -2 + 1;
    *puVar3 = *(undefined4 *)((int)&stack0xffffffd8 + (uint)bVar6 * 0xfffffffe * 4);
    *puVar4 = *(undefined4 *)(&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    puVar4[(uint)bVar6 * -2 + 1] =
         *(undefined4 *)
          ((int)(&stack0xffffffdc + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
          ((uint)bVar6 * -2 + 1) * 4);
  }
  else {
    if (*(char *)(param_1 + 0x28) == '\0') {
      FUN_00409dfc(param_1 + 0x24,&DAT_00622898,1,1);
      uVar1 = FUN_00518350(&DAT_00517b1c,1,**(undefined4 **)(param_1 + 8),param_4,param_5,
                           &stack0xffffffe4,local_c);
      **(undefined4 **)(param_1 + 0x24) = uVar1;
      iVar5 = *(int *)(param_1 + 4) + -1;
      if (0 < iVar5) {
        iVar2 = 1;
        do {
          FUN_0051882c(**(undefined4 **)(param_1 + 0x24),
                       *(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 4),local_c,param_4,param_5,
                       &stack0xffffffe4);
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else {
      FUN_00409dfc(param_1 + 0x24,&DAT_00622898,1,*(undefined4 *)(param_1 + 4));
      iVar5 = *(int *)(param_1 + 4);
      if (-1 < iVar5 + -1) {
        iVar2 = 0;
        do {
          uVar1 = FUN_00518350(&DAT_00517b1c,1,*(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 4),
                               param_4,param_5,&stack0xffffffe4,local_c);
          *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar2 * 4) = uVar1;
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    FUN_00623b48(param_1);
  }
  return;
}
