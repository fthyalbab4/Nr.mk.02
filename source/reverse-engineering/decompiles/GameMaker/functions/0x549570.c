// rea decompile_all
// name: FUN_00549570
// address: 0x549570
// body: available
// range: 0x549570-0x5498b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00549570(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int in_stack_00000004;
  undefined1 *puVar9;
  undefined1 local_40 [16];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [16];
  int local_10;
  uint local_c;
  uint local_8;

  piVar8 = (int *)(in_stack_00000004 + -4);
  if ((*(byte *)(*piVar8 + 0x58) & 2) == 0) {
    if ((*(byte *)(*piVar8 + 0x59) & 1) != 0) {
      uVar3 = (**(code **)(**(int **)(*piVar8 + 0x40) + 0x30))();
      uVar1 = FUN_00548da8(*(undefined4 *)(*(int *)(*piVar8 + 0x40) + 0x2c),
                           *(undefined4 *)(*piVar8 + 0x60));
      uVar6 = FUN_005449dc(uVar1,3);
      if (uVar3 != (uVar6 & 0xffff)) {
        uVar3 = (**(code **)(**(int **)(*piVar8 + 0x40) + 0x24))();
        uVar1 = FUN_00548da8(*(undefined4 *)(*(int *)(*piVar8 + 0x40) + 0x2c),
                             *(undefined4 *)(*piVar8 + 0x60));
        uVar6 = FUN_005449dc(uVar1,4);
        if (uVar3 != (uVar6 & 0xffff)) {
          uVar1 = FUN_00548da8(*(undefined4 *)(*(int *)(*piVar8 + 0x40) + 0x2c),
                               *(undefined4 *)(*piVar8 + 0x60));
          local_8 = FUN_005449dc(uVar1,2);
          local_8 = local_8 & 0xffff;
          uVar1 = FUN_00548da8(*(undefined4 *)(*(int *)(*piVar8 + 0x40) + 0x2c),
                               *(undefined4 *)(*piVar8 + 0x60));
          local_c = FUN_005449dc(uVar1,4);
          local_c = local_c & 0xffff;
          local_10 = (**(code **)(**(int **)(*piVar8 + 0x40) + 0x30))();
          iVar2 = (**(code **)(**(int **)(*piVar8 + 0x40) + 0x24))();
          iVar7 = FUN_00462a64(*(undefined4 *)(*piVar8 + 0x68));
          FUN_0045bc24(*(undefined4 *)(iVar7 + 0x48),
                       *(undefined4 *)(*(int *)(*piVar8 + 0x40) + 0x60));
          uVar1 = FUN_00548da8(*(undefined4 *)(*(int *)(*piVar8 + 0x40) + 0x2c),
                               *(undefined4 *)(*piVar8 + 0x60));
          uVar3 = FUN_005449dc(uVar1,1);
          local_30 = (uVar3 & 0xffff) + *(int *)(*piVar8 + 0x48);
          uVar1 = FUN_00548da8(*(undefined4 *)(*(int *)(*piVar8 + 0x40) + 0x2c),
                               *(undefined4 *)(*piVar8 + 0x60));
          uVar3 = FUN_005449dc(uVar1,3);
          local_28 = (uVar3 & 0xffff) + local_30;
          for (; local_30 < *(int *)(*piVar8 + 0x50); local_30 = local_30 + local_10) {
            local_2c = *(int *)(*piVar8 + 0x4c) + local_8;
            local_24 = local_2c + local_c;
            for (; local_2c < *(int *)(*piVar8 + 0x54); local_2c = local_2c + iVar2) {
              piVar5 = (int *)FUN_00462a64(*(undefined4 *)(*piVar8 + 0x68));
              (**(code **)(*piVar5 + 0x4c))(piVar5,&local_30);
              local_24 = local_24 + iVar2;
            }
            local_28 = local_28 + local_10;
          }
          return;
        }
      }
    }
    uVar1 = FUN_00548da8(*(undefined4 *)(*(int *)(*piVar8 + 0x40) + 0x2c),
                         *(undefined4 *)(*piVar8 + 0x60));
    FUN_005470f8(uVar1,*piVar8 + 0x48,local_40);
    puVar9 = local_40;
    piVar8 = (int *)FUN_00462a64(*(undefined4 *)(*piVar8 + 0x68));
    (**(code **)(*piVar8 + 0x4c))(piVar8,puVar9);
  }
  else if ((*(byte *)(*piVar8 + 0x59) & 1) == 0) {
    piVar5 = (int *)FUN_00462a64(*(undefined4 *)(*piVar8 + 0x68));
    (**(code **)(*piVar5 + 0x10))(piVar5,local_40);
    puVar9 = local_40;
    uVar1 = FUN_00548da8(*(undefined4 *)(*(int *)(*piVar8 + 0x40) + 0x2c),
                         *(undefined4 *)(*piVar8 + 0x60));
    FUN_005470f8(uVar1,puVar9,local_20);
    puVar9 = local_20;
    uVar1 = FUN_00462a64(*(undefined4 *)(*piVar8 + 0x70));
    uVar4 = FUN_00462a64(*(undefined4 *)(*piVar8 + 0x68));
    FUN_0045c400(uVar4,local_20,uVar1,puVar9);
  }
  else {
    uVar1 = FUN_00548da8(*(undefined4 *)(*(int *)(*piVar8 + 0x40) + 0x2c),
                         *(undefined4 *)(*piVar8 + 0x60));
    local_8 = FUN_005449dc(uVar1,2);
    local_8 = local_8 & 0xffff;
    uVar1 = FUN_00548da8(*(undefined4 *)(*(int *)(*piVar8 + 0x40) + 0x2c),
                         *(undefined4 *)(*piVar8 + 0x60));
    local_c = FUN_005449dc(uVar1,4);
    local_c = local_c & 0xffff;
    local_10 = (**(code **)(**(int **)(*piVar8 + 0x40) + 0x30))();
    iVar2 = (**(code **)(**(int **)(*piVar8 + 0x40) + 0x24))();
    uVar1 = FUN_00548da8(*(undefined4 *)(*(int *)(*piVar8 + 0x40) + 0x2c),
                         *(undefined4 *)(*piVar8 + 0x60));
    uVar3 = FUN_005449dc(uVar1,1);
    local_30 = (uVar3 & 0xffff) + *(int *)(*piVar8 + 0x48);
    uVar1 = FUN_00548da8(*(undefined4 *)(*(int *)(*piVar8 + 0x40) + 0x2c),
                         *(undefined4 *)(*piVar8 + 0x60));
    uVar3 = FUN_005449dc(uVar1,3);
    local_28 = (uVar3 & 0xffff) + local_30;
    for (; local_30 < *(int *)(*piVar8 + 0x50); local_30 = local_30 + local_10) {
      local_2c = *(int *)(*piVar8 + 0x4c) + local_8;
      local_24 = local_2c + local_c;
      for (; local_2c < *(int *)(*piVar8 + 0x54); local_2c = local_2c + iVar2) {
        piVar5 = &local_30;
        uVar1 = FUN_00462a64(*(undefined4 *)(*piVar8 + 0x70));
        uVar4 = FUN_00462a64(*(undefined4 *)(*piVar8 + 0x68));
        FUN_0045c400(uVar4,&local_30,uVar1,piVar5);
        local_24 = local_24 + iVar2;
      }
      local_28 = local_28 + local_10;
    }
  }
  return;
}
