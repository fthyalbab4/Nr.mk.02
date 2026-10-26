// rea decompile_all
// name: FUN_00667c60
// address: 0x667c60
// body: available
// range: 0x667c60-0x667cd3 inclusive
// range: 0x667d14-0x668124 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00667c60(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  double in_stack_00000014;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  double dVar21;
  int local_c;

  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = FUN_005682e0(&DAT_00567fb8,1);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    *(undefined4 *)PTR_DAT_006895a8 = uVar3;
    uVar3 = FUN_005661f8();
    FUN_0056871c(*(undefined4 *)(param_1 + 0xc),uVar3);
    bVar2 = false;
    iVar7 = *(int *)(param_1 + 4);
    if (-1 < iVar7 + -1) {
      local_c = 0;
      do {
        puVar1 = (undefined4 *)(*(int *)(param_1 + 8) + local_c * 0x58);
        switch(*puVar1) {
        case 0:
          uVar3 = FUN_004048b8();
          FUN_0056497c(uVar3,param_2);
          break;
        case 1:
          FUN_00564f30();
          break;
        case 2:
          FUN_00564990();
          bVar2 = true;
          break;
        case 3:
          FUN_004048b8();
          FUN_00564a30();
          break;
        case 4:
          FUN_00564adc();
          bVar2 = true;
          break;
        case 5:
          FUN_004048b8();
          FUN_00564b80();
          break;
        case 6:
          FUN_00564c30();
          bVar2 = true;
          break;
        case 7:
          FUN_004048b8();
          FUN_00564ce8();
          break;
        case 8:
          FUN_00564dac();
          bVar2 = true;
          break;
        case 9:
          FUN_004048b8();
          FUN_00564e68();
          break;
        case 10:
          FUN_00565054(param_2);
          bVar2 = true;
          break;
        case 0xb:
          uVar19 = *(undefined8 *)(puVar1 + 2);
          uVar3 = puVar1[5];
          uVar20 = puVar1[4];
          uVar18 = *(undefined8 *)(puVar1 + 6);
          uVar17 = puVar1[9];
          uVar16 = puVar1[8];
          uVar15 = puVar1[0xb];
          uVar14 = puVar1[10];
          uVar13 = puVar1[0xd];
          uVar12 = puVar1[0xc];
          uVar11 = puVar1[0xf];
          uVar10 = puVar1[0xe];
          uVar9 = puVar1[0x11];
          uVar8 = puVar1[0x10];
          uVar4 = FUN_004048b8();
          FUN_0056555c(param_2,0.5 <= *(double *)(puVar1 + 0x12),uVar4,uVar8,uVar9,uVar10,uVar11,
                       uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar20,uVar3,uVar19);
          bVar2 = true;
          break;
        case 0xc:
          dVar21 = in_stack_00000014 + *(double *)(puVar1 + 2);
          uVar3 = puVar1[5];
          uVar20 = puVar1[4];
          uVar19 = *(undefined8 *)(puVar1 + 6);
          uVar17 = puVar1[9];
          uVar16 = puVar1[8];
          uVar15 = puVar1[0xb];
          uVar14 = puVar1[10];
          uVar13 = puVar1[0xd];
          uVar12 = puVar1[0xc];
          uVar11 = puVar1[0xf];
          uVar10 = puVar1[0xe];
          uVar9 = puVar1[0x11];
          uVar8 = puVar1[0x10];
          uVar4 = FUN_004048b8();
          FUN_005658c8(param_2,0.5 <= *(double *)(puVar1 + 0x12),uVar4,uVar8,uVar9,uVar10,uVar11,
                       uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar19,uVar20,uVar3,dVar21);
          bVar2 = true;
          break;
        case 0xd:
          uVar3 = FUN_004048b8();
          FUN_00565b70(param_2,uVar3);
          bVar2 = true;
          break;
        case 0xe:
          FUN_00565ecc(param_2);
          bVar2 = true;
          break;
        case 0xf:
          FUN_00566024(param_2);
          bVar2 = true;
        }
        local_c = local_c + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)PTR_DAT_006895a8 = 0;
    if (!bVar2) {
      FUN_0056871c(*(undefined4 *)(param_1 + 0xc),1);
    }
  }
  else {
    iVar7 = FUN_00568724(*(int *)(param_1 + 0xc));
    if (iVar7 != 1) {
      uVar5 = FUN_00568724(*(undefined4 *)(param_1 + 0xc));
      uVar6 = FUN_005661f8();
      if (uVar5 != (uVar6 & 0xfffffffe)) {
        uVar3 = FUN_005661f8();
        FUN_00568c54(*(undefined4 *)(param_1 + 0xc),uVar3);
      }
    }
  }
  FUN_00568aa8(*(undefined4 *)(param_1 + 0xc),param_2);
  return;
}
